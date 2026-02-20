#include <iostream>
#include <vector>

using namespace std;

double divide (double n1, double n2);

int main(int argc, char *argv[]) {

    /*
        Quando nós programamos existem erros
        que podem ocorrer durante a execução
        do código. Um número não pode ser dividido
        por zero, não conseguimos imprimir uma variável
        nula, fazer referência a um objeto nulo, etc.

        Quando um erro acontece a execução do código é
        finalizada. O try-catch impede que aquela exceção
        trave o programa.
    */

    vector<int> num(5);
    double n1, n2;

    cin >> n1 >> n2;

    try {

        /*
            Dentro do bloco try, nós colocamos o
            código que pode causar um erro. Se houver uma
            exceção no código o bloco try "joga" o erro
            para o bloco catch.
        */
        
        // Aqui nós tentamos atribuir um valor a um índice
        // que não existe.
        num.at(7) = 10;

        // Aqui nós vamos causar uma exceção de divisão por 0
        cout << divide(n1, n2) << endl;

    }
    // Este catch pega a exceção que foi lançada pelo THROW
    catch (const char* msg) {
        cout << "ERROR" << msg << endl;
    }
    catch (exception& ex) {
        /*
            O bloco catch trata da exceção, a função
            dele é informar, ele não vai resolver o problema,
            mas serve para avisar o que causou este erro.

            No nosso caso o bloco Catch está recebendo uma 
            exceção genérica.
        */

        cout << "ERROR" << ex.what() << endl;

    }
    return 0;
}

double divide (double n1, double n2) {

    if (n2 == 0) {

        // O bloco throw GERA uma exceção,
        // que nós podemos tratar
        throw "Erro de divisão por ZERO";

    }

    return n1 / n2;

}