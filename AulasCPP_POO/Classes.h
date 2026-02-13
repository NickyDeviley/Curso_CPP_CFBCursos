#include <string>

#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class ClasseMae{

    public:
        int valor1;
        int valor2;
        std::string nome;
        ClasseMae() = default;

};

class ClasseFilha:public ClasseMae {

    public:
        ClasseFilha() = default;

};


#endif