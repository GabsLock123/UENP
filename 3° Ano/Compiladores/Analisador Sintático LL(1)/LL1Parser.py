import csv
import re

class LL1Parser:
    def __init__(self, table_file_path):
        self.parsing_table = {}
        self.stack = []
        self.load_parsing_table(table_file_path)

    def load_parsing_table(self, file_path):
        with open(file_path, mode='r') as csvfile:
            reader = csv.reader(csvfile)
            headers = next(reader)
            for row in reader:
                non_terminal = row[0]
                for j in range(1, len(headers)):
                    if row[j]:
                        self.parsing_table[(non_terminal, headers[j])] = row[j]
                        print(f"Tabela[{non_terminal}, {headers[j]}] = {row[j]}")  # Debugging

    def tokenize(self, input_string):
        # Ajuste de regex para lidar corretamente com espaços e tokens
        tokens = re.findall(r'id|\+|\*|\(|\)|\$', input_string)
        return tokens

    def parse(self, input_string):
        self.stack = []
        self.stack.append('$')
        self.stack.append('S')

        input_tokens = self.tokenize(input_string)
        input_tokens.append('$')
        index = 0

        while self.stack:
            top = self.stack[-1]
            current_token = input_tokens[index] if index < len(input_tokens) else '$'

            print(f"Topo da pilha: {top}, Token atual: {current_token}")  # Debugging

            if top == current_token:
                self.stack.pop()
                index += 1
            elif (top, current_token) in self.parsing_table:
                self.stack.pop()
                production = self.parsing_table[(top, current_token)]
                print(f"Produção aplicada: {top} -> {production}")  # Debugging
                if production != '_':
                    symbols = production.split()
                    for symbol in reversed(symbols):
                        self.stack.append(symbol)
            else:
                print(f"Erro: Entrada não aceita pela gramática. Problema com símbolo: '{current_token}'")
                return

        if index == len(input_tokens):
            print("Sucesso: Entrada aceita pela gramática.")
        else:
            print(f"Erro: Entrada não aceita pela gramática. Entrada restante: {' '.join(input_tokens[index:])}")

if __name__ == "__main__":
    parser = LL1Parser('parsing_table.csv')

    with open('input.txt', 'r') as file:
        input_string = file.read().strip()

    parser.parse(input_string)
