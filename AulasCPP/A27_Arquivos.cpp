#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    // ofstream, ifstream, fstream

    /*
        Para se trabalhar com arquivos externos
        nós devemos usar a biblioteca fstream.

        Ofstream = saída;
        ifstream = entrada;
        fstream  - Ambos;
    */

    ofstream arquivoS;   // Aqui nós estamos criando uma variável de saída que
                        // precisa ser vinculado a um arquivo externo

    arquivoS.open("A27_ArquivoExterno.txt", ios::app);   // Aqui nós pedimos para abrir o arquivo e passamos seu nome e tipo.
                                                         // Como a variável é de saída, ele cria o arquivo CASO ele não exista
    /*
        Quando usamos o ios::app após
        o arquivo ser inciado ele move
        o cursor para o final do arquivo
        então qualquer valor adicionado não
        sobreescreverá o anterior.
    */

    arquivoS << "Olá, mundo! Estou aprendendo a manipular arquivos com o C++\n";
    arquivoS << "Olá, mundo!";   // Aqui nós substituímos tudo o que já estava escrito no arquivo caso não tenha o ios::app

    arquivoS.close();    // Este comando fecha o arquivo.

    
    ifstream arquivoE;  // Aqui estamos criando uma variável de entrada
                        // Que precisa ser vinculada a um arquivo externo
    string linha;       // string para armazenar a linha de texto do arquivo

    // Atribuíndo um arquivo externo à variável de entrada.
    arquivoE.open("A27_ArquivoExterno.txt");

    // If para verificar se o arquivo já está aberto
    if (arquivoE.is_open()) {

        // Aqui nós verificamos se o arquivo tem uma nova linha para ser armazenada dentro da string
        // usando o método getline.
        while (getline(arquivoE, linha)) {
            cout << linha << endl;  // Aqui nós imprimimos a linha do arquivo que foi armazenada em string
        }

    }
    else {
        cout << "O arquivo não foi encontrado!" << endl;
    }



    return 0;
}