import json
import csv
import time

# Defina o caminho correto para o arquivo JSON
automato_json = 'AFD.json'

# Abra o arquivo JSON e carregue os dados
with open(automato_json, 'r') as automato:
    dados = json.load(automato)

# Criar o dicionário de transições
transitions = {}
for transition in dados['structure']['automaton']['transition']:
    from_state = transition['from']
    to_state = transition['to']
    reads = transition['read'].split(", ")
    for read in reads:
        transitions[(from_state, read)] = to_state

# Defina o caminho correto para o arquivo CSV
automato_csv = 'arquivo_de_testes.csv'

# Lista para armazenar os dados do CSV
dados_csv = []

# Abra o arquivo CSV e leia os dados
with open(automato_csv, 'r', newline='') as csvfile:
    reader = csv.reader(csvfile, delimiter=';')
    next(reader)  # Pula a primeira linha do cabeçalho (palavra de entrada;resultadoesperado)

    # Itera pelas linhas do arquivo e armazena os dados na lista
    for linha in reader:
        palavra_entrada, resultado_esperado = linha
        dados_csv.append((palavra_entrada, int(resultado_esperado)))

# Crie um novo arquivo CSV para armazenar os resultados
with open('resultadoAFD.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile, delimiter=';')
    writer.writerow(['palavra de entrada', 'resultado esperado', 'resultado obtido', 'tempo de execução'])  # cabeçalho

    # Processa cada entrada de teste
    for palavra_entrada, resultado_esperado in dados_csv:
        inicio = time.time()
        estado_atual = 0  # assumindo que 0 é o estado inicial
        for caracter in palavra_entrada:
            estado_atual = transitions.get((estado_atual, caracter), None)
            if estado_atual is None:  # transição não definida
                break
        fim = time.time()
        tempo_de_execucao = fim - inicio
        resultado_obtido = int(estado_atual == 2)  # assumindo que 2 é o estado de aceitação
        writer.writerow([palavra_entrada, resultado_esperado, resultado_obtido, tempo_de_execucao])

print("Resultado salvo em resultadoAFD.csv")
