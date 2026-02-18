#include <iostream>
#include <fstream>

using namespace std;

// AULA 48
int main(int argc, char *argv[]) {

    // IFSTREAM SERVE PARA LER CONTEÚDO DE ARQUIVOS

    ifstream arquivo;
    string linha;

    arquivo.open("OfstreamAula47.txt");
    if (arquivo.is_open()) {

        while(getline(arquivo, linha)) {

            cout << linha << endl;

        }
        arquivo.close();
    }
    else {

        cout << "Não foi possível abrir o arquivo!" << endl;

    }

    

    return 0;
}