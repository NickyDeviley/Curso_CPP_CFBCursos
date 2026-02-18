#include <iostream>
#include <vector>

using namespace std;

// AULA 39
int main(int argc, char *argv[]) {

    /*
        O Vector é apenas uma alternativa
        mais moderna dos arrays. São preparados
        com métodos úteis que permitem que você ganhe
        tempo.

        Além disso os vectores possuem tamanhos dinâmicos
        eles aumentam e diminuem seu tamanho baseado na
        quantidade de elementos dentro deles.

        Funciona de forma semelhante ao ArrayList do java.
    */

    // DECLARANDO UM VECTOR
    vector<int> num;
    vector<int> num2;
    int tam, i;

    // ADICIONANDO VALORES AO VECTOR
    num.push_back(1);   
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);

    // ADICIONANDO VALORES AO VECTOR
    num2.push_back(5);   
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);

    // Esse código gera um erro
    // Pois nós não definimos um tamanho
    // durante a instanciação.
    // num[4] = 3;

    // Esse código NÃO gera um erro
    // Pois nós já adicionamos um valor ao
    // espaço representado pelo índice 3.
    num[3] = 5;

    // ARMAZENANDO O TAMANHO DO VECTOR
    tam = num.size();

    // Este método inverte os valores
    // dos dois vectores
    num.swap(num2);

    cout << "tamanho do vector: " << tam << endl;

    for (i = 0; i < tam; i++) {
        cout << num[i] << " ";
    }

    // ARMAZENANDO O PRIMEIRO ELEMENTO DO VECTOR
    int primeiroNumero = num.front();

    // ARMAZENANDO O ÚLTIMO ELEMENTO DO VECTOR
    int ultimoNumero = num.back();

    // ARMAZENANDO UM VALOR ESPECÍFICO
    int valorAleatorio = num.at(2);
    int valorAleatorio = num.at(4);

    // MÉTODO PARA ADICIONAR VALORES EM UMA POSIÇÃO ESPECÍFICA
    num.insert(num.begin(), 888);
    num.insert(num.end(), 999);

    // MÉTODO PARA REMOVER VALORES EM UMA POSIÇÃO ESPECÍFICA
    num.erase(num.begin());

    // REMOVER O ÚLTIMO ELEMENTO DO VECTOR
    num.pop_back();

    // LIMPAR TODO O VECTOR
    num.clear();

    return 0;
}