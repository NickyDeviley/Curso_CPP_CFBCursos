#ifndef POO4_H_INCLUDED
#define POO4_H_INCLUDED

// CLASSE MÃE
class Veiculo {

public:
    int vel;
    int blind;
    int rodas;

    void setTipo(int tipo);
    void setVelMax(int velMax);
    void setArma(bool arma);

    int getTipo();
    int getVelMax();
    bool getArma();

private:
    int tipo;
    int velMax;
    bool arma;
};

/*
    Para acessar características privadas
    da classe pai, nós utilizamos os métodos
    GET e SET.
*/
inline void Veiculo::setTipo(int tipo) { this->tipo = tipo; }
inline void Veiculo::setVelMax(int velMax) { this->velMax = velMax; }
inline void Veiculo::setArma(bool arma) { this->arma = arma; }

inline int Veiculo::getTipo() { return this->tipo; }
inline int Veiculo::getVelMax() { return this->velMax; }
inline bool Veiculo::getArma() { return this->arma; }


// CLASSE FILHA QUE HERDA VEICULO
class Moto:public Veiculo {

public:
    Moto();

};

// CONSTRUTOR DA CLASSE MOTO
Moto::Moto() {

    this->vel = 0;
    this->blind = 2;
    this->rodas = 2;
    this->setTipo(10);
    this->setVelMax(200);
    this->setArma(true);

}

#endif