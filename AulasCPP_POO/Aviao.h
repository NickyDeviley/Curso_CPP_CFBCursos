#include <string>
#ifndef AVIAO_H_INCLUDED
#define AVIAO_H_INCLUDED

class Aviao {

    public:
        int vel = 0;
        int velMax;
        std::string tipo;
        Aviao(int tp);
        void imprimir();

};

Aviao::Aviao(int tp) {

    if (tp == 1) {
        this->velMax = 800;
        this->tipo = "Jato";
    }
    else if (tp == 2) {
        this->velMax = 350;
        this->tipo = "Monomotor";
    }
    else if (tp == 3) {
        this->velMax = 180;
        this->tipo = "planador";
    }

}

void Aviao::imprimir() {

    std::cout << "tipo: " << this->tipo << std::endl;
    std::cout << "VelMax: " << this->velMax << std::endl;

}

#endif