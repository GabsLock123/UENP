# Importação das bibliotecas necessárias
import json
import csv
import time

# Função com objetivo de calcular o fechamento epsilon de um conjunto de estados
def fechamento_epsilon(estados, transitions):
    # Criação do conjunto vazio "estados_adicionais"
    estados_adicionais = set()
    # Percorre todos os estados do conjunto de estados
    # Para cada estado, obtém o conjunto de estadosque podem ser alcançados através de uma transição epsilon a partir
    # desse estado. Se não houver transição epsilon, o conjunto vazio é retornado
    for estado in estados:
        estados_adicionais = estados_adicionais.union(transitions.get((estado, 'epsilon'), set()))
    # Verifica se os estados adicionais estão contidos no conjunto original de estados
    # Se estiverem contidos, não há mais estados a serem adicionados ao fechamento epsilon e retorna o conjunto de estados atual
    # Caso contrário, chama a função fechamento epsilon com o conjunto atualizado, sendo este a união dos conjuntos "estados" e "estados_adicionais" e o dicionário "transitions"
    if estados_adicionais.issubset(estados):
        return estados
    else:
        return fechamento_epsilon(estados.union(estados_adicionais), transitions)

# Variável com o caminho para o arquivo JSON
automato_json = 'AFND.json'

# Abertura do arquivo JSON para leitura e carregamento dos dados para a variável dados, utilizando json.load()
with open(automato_json, 'r') as automato:
    dados = json.load(automato)

# Criação do dicionário vazio para armazenar as transições
transitions = {}
# Loop que extrai, para cada posição, o estado de origem (from_state), estado de destino (to_state) e informações de leitura (reads) a partir do objeto de dados
for transition in dados['structure']['automaton']['transition']:
    from_state = transition['from']
    to_state = transition['to']
    reads = transition['read'].split(", ")
    for read in reads:
        if (from_state, read) in transitions:
            transitions[(from_state, read)].add(to_state)
        else:
            transitions[(from_state, read)] = {to_state}

# Variável com o caminho para o arquivo CSV de entrada de testes
automato_csv = 'arquivo_de_testes.csv'

# Lista para armazenar os dados do CSV
dados_csv = []

# Abre o arquivo CSV para leitura e lê os dados usando o leitor CSV e usando o delimitador ";" para separar as colunas
with open(automato_csv, 'r', newline='') as csvfile:
    reader = csv.reader(csvfile, delimiter=';')
    next(reader)  # Pula a primeira linha do cabeçalho (palavra de entrada;resultadoesperado)

    # Dentro do loop for, são lidas as linhas do arquivo e os resultados são armazenados na lista dados_csv
    for linha in reader:
        palavra_entrada, resultado_esperado = linha
        dados_csv.append((palavra_entrada, int(resultado_esperado)))

# Um novo arquivo CSV é criado para escrita e armazenamento dos resultados
with open('resultadoAFNDVazio.csv', 'w', newline='') as csvfile:
    writer = csv.writer(csvfile, delimiter=';')
    writer.writerow(['palavra de entrada', 'resultado esperado', 'resultado obtido', 'tempo de execução'])  # cabeçalho

    # Processa cada entrada de teste
    for palavra_entrada, resultado_esperado in dados_csv:
        # Inicio do processamento que também representa o inicio da contagem de tempo
        # Processa cada palavra de entrada, encontra os estados alcançáveis a partir do estado inicial através das transições 
        # correspondentes a cada caractere e verifica se o estado de aceitação é alcançado
        inicio = time.time()
        estados_atuais = {0}  # Considerando que 0 é o estado inicial
        estados_atuais = fechamento_epsilon(estados_atuais, transitions)
        for caracter in palavra_entrada:
            novos_estados = set()
            for estado in estados_atuais:
                transicoes = transitions.get((estado, caracter), set())
                novos_estados = novos_estados.union(transicoes)
            estados_atuais = fechamento_epsilon(novos_estados, transitions)
        fim = time.time()
        # Após finalizar o processamento da entrada, obtém-se de novo o tempo e este é subtraído do inicial para que se possa ter o tempo de execução
        tempo_de_execucao = fim - inicio
        resultado_obtido = int(2 in estados_atuais)  # Considerando que 2 é o estado de aceitação
        writer.writerow([palavra_entrada, resultado_esperado, resultado_obtido, tempo_de_execucao])

print("Resultado salvo em resultadoAFNDVazio.csv")
