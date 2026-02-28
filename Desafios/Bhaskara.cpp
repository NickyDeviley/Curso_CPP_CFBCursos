#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]) {

    // Fórmula de Bhaskara
    // -b +- raiz((b * b)-4ac) / 2 * a

    int a, b, c;
    cout << "Entre os 3 valores: " << endl;
    cin >> a >> b >> c;

    calcBhask(a, b, c);

    return 0;
}

void calcBhask(int a, int b, int c) {

    int bNegativo = -b;
    int r1, r2;
    double delta;

    delta = sqrt((b * b) - 4 * a * c);

    r1 = (bNegativo + delta) / 2 * a;
    r2 = (bNegativo - delta) / 2 * a;

    cout << "Resultado 1: " << r1 << endl;
    cout << "Resultado 2: " << r2 << endl;

}