import csv
import re

class LL1Parser:
    def __init__(self, caminho_arquivo_tabela):
        self.tabela_parsing = {}
        self.pilha = []
        self.carregar_tabela_parsing(caminho_arquivo_tabela)

    def carregar_tabela_parsing(self, caminho_arquivo):
        with open(caminho_arquivo, mode='r') as csvfile:
            leitor = csv.reader(csvfile)
            cabecalhos = next(leitor)
            for linha in leitor:
                nao_terminal = linha[0]
                for j in range(1, len(cabecalhos)):
                    if linha[j]:
                        self.tabela_parsing[(nao_terminal, cabecalhos[j])] = linha[j]
                        print(f"Tabela[{nao_terminal}, {cabecalhos[j]}] = {linha[j]}")  # Depuração

    def tokenizar(self, string_entrada):
        # Ajuste de regex para lidar corretamente com espaços e tokens
        tokens = re.findall(r'id|\+|\*|\(|\)|\$', string_entrada)
        return tokens

    def analisar(self, string_entrada):
        self.pilha = []
        self.pilha.append('$')
        self.pilha.append('S')

        tokens_entrada = self.tokenizar(string_entrada)
        tokens_entrada.append('$')
        indice = 0

        while self.pilha:
            topo = self.pilha[-1]
            token_atual = tokens_entrada[indice] if indice < len(tokens_entrada) else '$'

            print(f"Topo da pilha: {topo}, Token atual: {token_atual}")  # Depuração

            if topo == token_atual:
                self.pilha.pop()
                indice += 1
            elif (topo, token_atual) in self.tabela_parsing:
                self.pilha.pop()
                producao = self.tabela_parsing[(topo, token_atual)]
                print(f"Produção aplicada: {topo} -> {producao}")  # Depuração
                if producao != '_':
                    simbolos = producao.split()
                    for simbolo in reversed(simbolos):
                        self.pilha.append(simbolo)
            else:
                print(f"Erro: Entrada não aceita pela gramática. Problema com símbolo: '{token_atual}'")
                return

        if indice == len(tokens_entrada):
            print("Sucesso: Entrada aceita pela gramática.")
        else:
            print(f"Erro: Entrada não aceita pela gramática. Entrada restante: {' '.join(tokens_entrada[indice:])}")

if __name__ == "__main__":
    analisador = LL1Parser('parsing_table.csv')

    with open('input.txt', 'r') as arquivo:
        string_entrada = arquivo.read().strip()

    analisador.analisar(string_entrada)
