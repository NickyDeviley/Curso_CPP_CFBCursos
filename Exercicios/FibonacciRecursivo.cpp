#include <iostream>

using namespace std;

void fibonacci(int a, int b, int c);

int main() {

    fibonacci(0, 1, 1);

    return 0;
}

void fibonacci(int a, int b, int c) {

    c = a + b;
    a = b;
    b = c;

    cout << c << endl;

    if (c < 100) {
        fibonacci(a, b, c);
    }

}

/*
    a = 0;
    b = 1;
    c = 0;

    a + b = c;
    a = b;
    b = c;
*/