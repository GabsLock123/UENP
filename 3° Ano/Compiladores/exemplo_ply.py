import ply.lex as lex
import ply.yacc as yacc

# Definição dos tokens
tokens = ('NUMERO', 'MAIS', 'MENOS', 'MULT', 'DIV', 'LPAREN', 'RPAREN')

# Expressões regulares para os tokens
t_MAIS = r'\+'
t_MENOS = r'-'
t_MULT = r'\*'
t_DIV = r'/'
t_LPAREN = r'\('
t_RPAREN = r'\)'

def t_NUMERO(t):
    r'\d+'
    t.value = int(t.value)
    return t

# Ignorar espaços em branco
t_ignore = ' \t'

def t_error(t):
    print(f"Caractere ilegal: {t.value[0]}")
    t.lexer.skip(1)

# Criar o analisador léxico
lexer = lex.lex()

# Definição da gramática
def p_expressao(p):
    '''
    expressao : expressao MAIS termo
              | expressao MENOS termo
              | termo
    '''
    if len(p) == 4:
        if p[2] == '+':
            p[0] = p[1] + p[3]
        elif p[2] == '-':
            p[0] = p[1] - p[3]
    else:
        p[0] = p[1]

def p_termo(p):
    '''
    termo : termo MULT fator
          | termo DIV fator
          | fator
    '''
    if len(p) == 4:
        if p[2] == '*':
            p[0] = p[1] * p[3]
        elif p[2] == '/':
            p[0] = p[1] / p[3]
    else:
        p[0] = p[1]

def p_fator(p):
    '''
    fator : NUMERO
          | LPAREN expressao RPAREN
    '''
    if len(p) == 2:
        p[0] = p[1]
    else:
        p[0] = p[2]

def p_error(p):
    print("Erro de sintaxe!")

# Criar o analisador sintático
parser = yacc.yacc()

# Exemplo de uso
while True:
    try:
        s = input('Digite uma expressão: ')
    except EOFError:
        break
    resultado = parser.parse(s)
    print(f"Resultado: {resultado}")
