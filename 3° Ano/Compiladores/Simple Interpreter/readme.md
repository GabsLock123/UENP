# 🧮 Interpretador Simples de C#

## 🇧🇷 Português

### Descrição
Este é um projeto de um interpretador simples de C# que pode ler e executar operações matemáticas básicas e atribuições de variáveis. Ele suporta as operações de soma, subtração, multiplicação e divisão, bem como expressões entre parênteses e comandos de impressão.

### Funcionalidades
- ✅ Atribuição de variáveis (`a = 5`)
- ➕ Operações de adição (`2 + 2`)
- ➖ Operações de subtração (`4 - 2`)
- ✖️ Operações de multiplicação (`3 * 4`)
- ➗ Operações de divisão (`10 / 2`)
- 🅰️ Operações envolvendo variáveis (`a = a * 8`)
- 📢 Comando de impressão (`PRINT 5 + 3`)
- 📚 Suporte a expressões complexas com parênteses (`(2 + 3) * 4`)

### Estrutura do Projeto
- `Lexer.cs` - Analisa a entrada e gera tokens.
- `Parser.cs` - Analisa a sequência de tokens e executa operações.
- `SymbolTable.cs` - Armazena variáveis e seus valores.
- `Interpreter.cs` - Coordena a análise léxica e sintática para interpretar e executar comandos.
- `Program.cs` - Ponto de entrada do programa.

---

## 🇺🇸 English

### Description
This is a simple C# interpreter project that can read and execute basic mathematical operations and variable assignments. It supports addition, subtraction, multiplication, and division operations, as well as expressions with parentheses and print commands.

### Features
- ✅ Variable assignment (`a = 5`)
- ➕ Addition operations (`2 + 2`)
- ➖ Subtraction operations (`4 - 2`)
- ✖️ Multiplication operations (`3 * 4`)
- ➗ Division operations (`10 / 2`)
- 🅰️ Operations involving variables (`a = a * 2`)
- 📢 Print command (`PRINT 5 + 3`)
- 📚 Support for complex expressions with parentheses (`(2 + 3) * 4`)

### Project Structure
- `Lexer.cs` - Analyzes input and generates tokens.
- `Parser.cs` - Analyzes the sequence of tokens and executes operations.
- `SymbolTable.cs` - Stores variables and their values.
- `Interpreter.cs` - Coordinates lexical and syntactic analysis to interpret and execute commands.
- `Program.cs` - Entry point of the program.
