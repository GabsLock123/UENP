using System;
using System.Collections.Generic;

namespace Calc
{
    // Classe que representa a tabela de símbolos
    public class SymbolTable
    {
        private Dictionary<string, double> _table;

        // Construtor que inicializa a tabela de símbolos
        public SymbolTable()
        {
            _table = new Dictionary<string, double>();
        }

        // Método para adicionar ou atualizar uma variável na tabela de símbolos
        public void Add(string varName, double value)
        {
            if (_table.ContainsKey(varName))
                _table[varName] = value;
            else
                _table.Add(varName, value);
        }

        // Método para obter o valor de uma variável da tabela de símbolos
        public double Get(string varName)
        {
            if (_table.TryGetValue(varName, out double value))
                return value;
            throw new Exception("Variável não definida: " + varName);
        }
    }
}
