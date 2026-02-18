#include <iostream>
#include <fstream>

using namespace std;

// AULA 47
int main(int argc, char *argv[]) {

    /*
        As linguagens de programação costumam
        oferecer o poder de criar, manipular e deletar
        arquivos, arquivos de texto, arquivos de configuração,
        e até mesmo permitem você criar suas próprias extensões.
    */

    // ofstream = Saída
    // ifstream = Entrada
    // fstream = Entrada/Saída

    // DECLARANDO UM OBJETO ARQUIVO
    ofstream arquivo;

    // CHAMANDO O MÉTODO PARA ABRIR/CRIAR O ARQUIVO EXTERNO
    arquivo.open("OfstreamAula47.txt");

    // ADICIONANDO TEXTO AO ARQUIVO
    arquivo << "Adicionando Texto dentro do Arquivo";

    // ABRINDO A ÁREA DE MEMÓRIA DO ARQUIVO
    arquivo.close();

    /*
        Caso a gente tente adicionar mais texto,
        o que já foi escrito no arquivo será reescrito.

        O que nós podemos fazer para resolver esse problema?
        utilizar o ios::app, que, quando algo for adicionado neste arquivo
        o ponteiro que indica a posição inicial sera movido para o 
        final do conteúdo.
    */

    ofstream arquivo2;

    arquivo2.open("Ofstream2Aula47.txt");

    arquivo << "Adicionando texto\n";
    arquivo << "Adicionando mais texto";

    arquivo2.close();


    return 0;
}