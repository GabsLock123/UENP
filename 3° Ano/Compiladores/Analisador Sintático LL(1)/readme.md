# 🌟 LL(1) Parser

## Descrição
Implementação de um **Analisador Sintático LL(1)** utilizando Python. O analisador é capaz de processar uma entrada com base em uma tabela de análise pré-definida e determinar se a entrada é aceita pela gramática.

## Estrutura do Projeto
- `LL1Parser.py`: O script principal que implementa o analisador LL(1).
- `parsing_table.csv`: A tabela de análise usada pelo analisador.
- `input.txt`: Arquivo de entrada contendo a string a ser analisada.

## Funcionalidades
- **Carregamento da Tabela de Análise**: O analisador carrega uma tabela de análise em formato CSV e a utiliza para determinar as produções.
- **Tokenização**: O script converte a entrada em uma lista de tokens.
- **Parsing**: Com base na tabela de análise e nos tokens gerados, o analisador verifica se a string de entrada é aceita pela gramática.

## Como Usar 🚀
1. **Configuração**:
   - Coloque sua tabela de análise no arquivo `parsing_table.csv`.
   - Insira a string de entrada a ser analisada no arquivo `input.txt`.

2. **Execução**:
   - Execute o script `LL1Parser.py` para analisar a entrada:
     ```bash
     python3 LL1Parser.py
     ```

3. **Resultado**:
   - O resultado será impresso no console, indicando se a entrada foi aceita ou não pela gramática.
