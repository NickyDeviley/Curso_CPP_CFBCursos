#include <iostream>
#include <fstream>

using namespace std;

// AULA 49
int main(int argc, char *argv[]) {

    // DECLARANDO O OBJETO ARQUIVO
    fstream arquivo;
    string nome, linha;
    char opc = 's';

    // ABRINDO O ARQUIVO COMO MODO DE SAÍDA
    arquivo.open("Arquivo.txt", ios::out | ios::app);

    while ((opc == 's') || (opc == 'S')) {

            cout << "Digite um nome: " << endl;
            cin >> nome;
            arquivo << nome << "\n";
            cout << "Deseja digitar mais um nome?" << endl;
            cin >> opc;
            system("cls");

    }
    arquivo.close();

    // ABRINDO O ARQUIVO COMO MODO DE ENTRADA
    arquivo.open("Arquivo.txt", ios::in);

    cout << "Nomes Digitados: " << endl;

    if(arquivo.is_open()) {

        while(getline(arquivo, linha)) {
            cout << linha << endl;
        }

    }
    else {
        cout << "Não foi possível abrir o arquivo!" << endl;
    }

    arquivo.close();

    return 0;
}