#include <iostream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {

    int notaAluno, notaAluno2, res;

    inicio:

    system("cls");  // Função que limpa o prompt

    cin >> notaAluno;
    cin >> notaAluno2;

    res = notaAluno + notaAluno2;

    if (res >= 60) {

        cout << "Aluno Aprovado";

    }
    else if (res >= 40) {

        cout << "Aluno em recuperação";

    }
    else {

        cout << "Aluno Reprovado";

    }

    cout << "Deseja escrever outras notas? (s/n)" << endl;

    char letra;
    cin >> letra;

    if (letra == 's' || letra == 'S') {

        goto inicio;

    }

    return 0;
}