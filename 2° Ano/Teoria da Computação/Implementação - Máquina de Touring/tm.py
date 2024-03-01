import json

# Carrega as configurações da Máquina de Turing de um arquivo JSON.
def carregar_configuracoes(arquivo_json):
    with open(arquivo_json, 'r') as file:  # Abre o arquivo de configurações.
        return json.load(file)  # Carrega e retorna as configurações como um dicionário.

# Define a classe TuringMachine, que simula uma Máquina de Turing.
class TuringMachine:
    # Inicializa a Máquina de Turing com configurações iniciais.
    def __init__(self, initial, final, white, transitions):
        self.estado_atual = initial  # Estado inicial da máquina.
        self.estados_finais = set(final)  # Conjunto de estados finais para busca rápida.
        self.simbolo_branco = white  # Símbolo que representa um espaço em branco na fita.
        # Dicionário de transições para acesso rápido, mapeando (estado, leitura) para (estado destino, escrita, direção).
        self.transitions = {(t['from'], t['read']): (t['to'], t['write'], t['dir']) for t in transitions}
        self.fita = []  # Representa a fita da máquina como uma lista.
        self.cabeca_leitura = 0  # Posição da cabeça de leitura/escrita na fita.

    # Retorna a palavra atualizada na fita como uma string.
    def get_palavra_atualizada(self):
        return ''.join(self.fita)

    # Prepara a fita para execução com a entrada fornecida.
    def reset_fita(self, entrada):
        self.fita = list(entrada) + [self.simbolo_branco]  # Converte a entrada para lista e adiciona um espaço extra.
        self.cabeca_leitura = 0  # Reseta a posição da cabeça de leitura para o início.

    # Executa a Máquina de Turing com a entrada fornecida.
    def executar(self, entrada):
        self.reset_fita(entrada)  # Prepara a fita.
        while True:  # Loop até que uma condição de parada seja alcançada.
            # Lê o símbolo atual na fita ou usa o símbolo branco se fora dos limites.
            simbolo_atual = self.fita[self.cabeca_leitura] if self.cabeca_leitura < len(self.fita) else self.simbolo_branco
            # Busca a transição correspondente ao estado atual e símbolo lido.
            transicao = self.transitions.get((self.estado_atual, simbolo_atual))
            if transicao:  # Se uma transição é encontrada, executa-a.
                to, write, dir = transicao
                self.fita[self.cabeca_leitura] = write  # Escreve o novo símbolo na fita.
                self.estado_atual = to  # Atualiza o estado.
                # Move a cabeça de leitura conforme a direção especificada.
                if dir == 'R':
                    self.cabeca_leitura += 1
                    if self.cabeca_leitura == len(self.fita):  # Se necessário, adiciona espaço extra na fita.
                        self.fita.append(self.simbolo_branco)
                else:
                    self.cabeca_leitura = max(0, self.cabeca_leitura - 1)
            else:
                break  # Sai do loop se nenhuma transição válida for encontrada.
        return self.estado_atual in self.estados_finais  # Retorna True se a máquina terminar em um estado final.

# Lê a entrada de um arquivo.
def ler_entrada(arquivo_entrada):
    with open(arquivo_entrada, 'r') as file:
        return file.read().strip()  # Remove espaços em branco adicionais.

# Salva a palavra atualizada na fita em um arquivo de saída.
def salvar_saida(arquivo_saida, palavra_atualizada):
    with open(arquivo_saida, 'w') as file:
        file.write(palavra_atualizada)

if __name__ == "__main__":
    # Carrega as configurações e executa a Máquina de Turing com a entrada fornecida.
    configuracoes = carregar_configuracoes("duplobal.json")
    tm = TuringMachine(configuracoes['initial'], configuracoes['final'], configuracoes['white'], configuracoes['transitions'])

    entrada = ler_entrada("Entrada_TM.txt")  # Lê a entrada do arquivo especificado.
    aceita = tm.executar(entrada)  # Executa a máquina com a entrada e verifica se foi aceita.
    palavra_atualizada = tm.get_palavra_atualizada()  # Obtém a palavra atualizada na fita.

    salvar_saida("resultado_TM.txt", palavra_atualizada)  # Salva a palavra atualizada no arquivo de saída.
    print(f"{'1' if aceita else '0'}")  # Imprime '1' se aceita, '0' caso contrário.
