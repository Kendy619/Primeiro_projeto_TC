#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <locale.h>
#include <stdlib.h>
#include <cstring>
#include <string.h>
#include <vector>

using namespace std;


//Para  os atributos do AF

typedef struct af{
    short inicio;            // Inicio do estado
    short* fim;             // Fim do estado
    size_t num_estados;      // Numero de estados
    short** transicoes;   // De onde ... para onde
    char* t_simbolo; // Simbolo da transição
    size_t num_transicoes; // Numero de transições
    char* alfabeto;
    size_t tam_alfabeto;
} af_atri;

//Para as transições


typedef struct transicao transicao_atri;
    struct transicao {
        short from;
        short to;
        char simbolo;
        int cont;
        size_t tamanho;
        transicao_atri* next;
    };

importar(){
    ifstream entrada;
    string nome;
    entrada.open("teste.jff", ios::in);

    if (entrada.is_open()){
        cerr << "Arquivo aberto com sucesso!" << endl;
    }

    while (!entrada.eof()){
        getline(entrada,nome);
        cout << nome << endl;
    }
    entrada.close();

    if (!entrada.is_open()){
        cerr << "Arquivo fechado com sucesso!" << endl;
    }
}


int main()
{
    setlocale (LC_ALL,"portuguese");
    importar();
    return 0;
}
