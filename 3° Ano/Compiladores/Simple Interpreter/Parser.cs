using System;

namespace Calc
{
    public class Parser
    {
        private Lexer _lexer;
        private Token _currentToken;

        // Construtor que inicializa o analisador léxico
        public Parser(Lexer lexer)
        {
            _lexer = lexer;
            _currentToken = _lexer.NextToken();
        }

        // Método para consumir o token atual e avançar para o próximo token
        private void Eat(TokenType type)
        {
            if (_currentToken.Type == type)
                _currentToken = _lexer.NextToken();
            else
                throw new Exception($"Erro de sintaxe: esperado {type} mas encontrado {_currentToken.Type}");
        }

        // Método para analisar fatores (números, variáveis e expressões entre parênteses)
        private double Factor()
        {
            var token = _currentToken;
            if (token.Type == TokenType.NUM)
            {
                Eat(TokenType.NUM);
                return token.Value ?? 0;
            }
            else if (token.Type == TokenType.VAR)
            {
                Eat(TokenType.VAR);
                return _lexer.Table.Get(token.Text!);
            }
            else if (token.Type == TokenType.OPEN)
            {
                Eat(TokenType.OPEN);
                double result = Expr();
                Eat(TokenType.CLOSE);
                return result;
            }
            throw new Exception("Erro de sintaxe no fator");
        }

        // Método para analisar termos (fatores combinados por multiplicação ou divisão)
        private double Term()
        {
            double result = Factor();
            while (_currentToken.Type == TokenType.MUL || _currentToken.Type == TokenType.DIV)
            {
                if (_currentToken.Type == TokenType.MUL)
                {
                    Eat(TokenType.MUL);
                    result *= Factor();
                }
                else if (_currentToken.Type == TokenType.DIV)
                {
                    Eat(TokenType.DIV);
                    result /= Factor();
                }
            }
            return result;
        }

        // Método para analisar expressões (termos combinados por adição ou subtração)
        private double Expr()
        {
            double result = Term();
            while (_currentToken.Type == TokenType.SUM || _currentToken.Type == TokenType.SUB)
            {
                if (_currentToken.Type == TokenType.SUM)
                {
                    Eat(TokenType.SUM);
                    result += Term();
                }
                else if (_currentToken.Type == TokenType.SUB)
                {
                    Eat(TokenType.SUB);
                    result -= Term();
                }
            }
            return result;
        }

        // Método principal para analisar comandos
        public string Cmd()
        {
            if (_currentToken.Type == TokenType.PRINT)
            {
                Eat(TokenType.PRINT);
                double result = Expr();
                return result.ToString();
            }
            else if (_currentToken.Type == TokenType.VAR)
            {
                string varName = _currentToken.Text!;
                Eat(TokenType.VAR);
                Eat(TokenType.EQ);
                double value = Expr();
                _lexer.Table.Add(varName, value);
                return varName + " = " + value;
            }
            else
            {
                double result = Expr();
                return result.ToString();
            }
        }
    }
}
