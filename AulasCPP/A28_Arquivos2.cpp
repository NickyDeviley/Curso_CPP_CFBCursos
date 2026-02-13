#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

    fstream arquivo;    // Criando o objeto arquivo
    char opc = 's';     // Criando a variável de escolha
    string nome, linha; // Criando a string que será inserida no arquivo

    /*
        Aqui nós estamos atribuíndo o arquivo ao objeto criado,
        é importante notar que o fstream, por ser genérico, nos
        obriga a declarar se o arquivo é de saída ou entrada de
        dados.
    */
    arquivo.open("A28_ArquivoExterno.txt", ios::out);

    while (opc == 's' || opc == 'S') {
        cout << "Digite um nome!" << endl;
        cin >> nome;

        arquivo << nome << "\n";

        cout << "\nDigitar um novo nome?[s/n]" << endl;
        cin >> opc;
        system("CLS");
    }
    arquivo.close();

    arquivo.open("A28_ArquivoExterno.txt", ios::in);

    cout << "Nomes digitados" << endl;

    if (arquivo.is_open()) {

        while (getline(arquivo, linha)) {
            cout << linha << endl;
        }
        arquivo.close();
    }
    else {
        cout << "Arquivo não foi encontrado" << endl;
    }

    

    return 0;
}