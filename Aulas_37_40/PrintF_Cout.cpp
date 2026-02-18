#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

int main(int argc, char *argv[]) {

    /*
        Nós podemos limitar a quantidade de casas decimais
        de um número flutuante.
    */

    float pi = M_PI;

    printf("Valor de pi: %.2f", pi);

    /*
        Também podemos aumentar a quantidade de números
        apresentados antes da vírgula.
    */

    int num = 5;

    printf("Valor de Num: %07.d", num); // imprime 0000005


    
    // Quanto ao COUT, nós podemos converter um número para hexadecimal
    int num2 = 10;
    cout << "valor de num em hexa: " << hex << num2 << endl;

    // Convertendo para octadecimal:
    cout << "valor de num em oct: " << oct << num2 << endl;

    // Convertendo para decimal:
    cout << dec << num2 << endl;

    // Convertendo para qualquer base:
    cout << "Valor na Escala 6: " << setbase(6) << num2 << endl;

    // Limitando a quantidade de números:
    cout.precision(4);

    cout << pi << endl;

    // Transformando o num em notação científica:
    cout << std::scientific << pi << endl;

    // Aumentando o espaço entre o texto e a variável e substituindo por 0
    cout << "Olá: " << setw(10) << setfill(10) << num2 << endl;

    return 0;
}