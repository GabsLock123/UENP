using System;
using System.Collections.Generic;

namespace Calc
{
    public enum TokenType
    {
        VAR, NUM, EQ, SUM, SUB, MUL, DIV, OPEN, CLOSE, PRINT, EOF
    }

    public struct Token
    {
        public TokenType Type;
        public string? Text;
        public double? Value;
    }

    public class Lexer
    {
        public static char EOF = '\0';

        public string Input { get; set; }
        private int _ptr;
        public SymbolTable Table { get; private set; }

        public Lexer(string input, SymbolTable table)
        {
            Input = input;
            _ptr = 0;
            Table = table;
        }

        private char Scan()
        {
            if (_ptr == Input.Length)
                return EOF;
            return Input[_ptr++];
        }

        private int ParseInt(char c)
        {
            return c switch
            {
                '0' => 0,
                '1' => 1,
                '2' => 2,
                '3' => 3,
                '4' => 4,
                '5' => 5,
                '6' => 6,
                '7' => 7,
                '8' => 8,
                '9' => 9,
                _ => -1,
            };
        }

        public Token NextToken()
        {
            char c = Scan();
            if (c == EOF)
                return new Token { Type = TokenType.EOF };

            // remover espaços em branco
            while (c == ' ' || c == '\t')
            {
                c = Scan();
            }

            switch (c)
            {
                case '+': return new Token { Type = TokenType.SUM };
                case '-': return new Token { Type = TokenType.SUB };
                case '*': return new Token { Type = TokenType.MUL };
                case '/': return new Token { Type = TokenType.DIV };
                case '(': return new Token { Type = TokenType.OPEN };
                case ')': return new Token { Type = TokenType.CLOSE };
                case '=': return new Token { Type = TokenType.EQ };
                case 'P':
                    if (Scan() == 'R' && Scan() == 'I' && Scan() == 'N' && Scan() == 'T')
                        return new Token { Type = TokenType.PRINT };
                    break;
            }

            if (char.IsDigit(c))
            {
                double value = ParseInt(c);
                c = Scan();
                while (char.IsDigit(c))
                {
                    value = value * 10 + ParseInt(c);
                    c = Scan();
                }
                _ptr--; // retrocede um caractere
                return new Token { Type = TokenType.NUM, Value = value };
            }

            if (char.IsLower(c))
            {
                string varName = c.ToString();
                c = Scan();
                while (char.IsLower(c))
                {
                    varName += c;
                    c = Scan();
                }
                _ptr--; // retrocede um caractere
                return new Token { Type = TokenType.VAR, Text = varName };
            }

            throw new Exception("Caractere inválido encontrado: " + c);
        }
    }
}
