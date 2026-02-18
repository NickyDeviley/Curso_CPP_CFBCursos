#ifndef POO5_H_INCLUDED
#define POO5_H_INCLUDED

#include <iostream>

class Base1 {
public: 
    void impBase1();
};

void inline Base1::impBase1() {
    std::cout << "Classe Base1" << std::endl;
}

class Base2 {
public:
    void impBase2();
};

void inline Base2::impBase2() {
    std::cout << "Classe Base2" << std::endl;
}


class filha:public Base1, public Base2 {

    /*
        Esta classe "filha" está herdando duas
        classes diferentes.
    */

};

#endif