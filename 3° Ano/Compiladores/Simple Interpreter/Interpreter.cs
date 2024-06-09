namespace Calc
{
    public class Interpreter
    {
        private SymbolTable _table;

        // Construtor que inicializa a tabela de símbolos
        public Interpreter()
        {
            _table = new SymbolTable();
        }

        // Método para executar um comando
        public string Exec(string? command)
        {
            if (command == null) return "";

            var lexer = new Lexer(command, _table);
            var parser = new Parser(lexer);
            return parser.Cmd();
        }
    }
}
