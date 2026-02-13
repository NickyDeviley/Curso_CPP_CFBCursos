#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class Veiculo {

    public:
        int velMax;
        int tipo;

        //Método construtor
        Veiculo(int tp);

        // Métodos get e set
        void setNome(std::string nome);
        std::string getNome();
        void setVel(int vel);
        int getVel();
        void setLigado(bool ligado);
        bool getLigado();


    private:
        std::string nome;
        int vel;
        bool ligado;

};

Veiculo::Veiculo(int tp) {
    tipo = tp;
    if (tipo == 1) {
        nome = "carro";
    }
    else if (tipo == 2) {
        nome = "Aviao";
    }
    else if (tipo == 3) {
        nome = "Navio";
    }
}

void Veiculo::setNome(std::string nome) {
    this->nome = nome;
}
std::string Veiculo::getNome() {
    return this->nome;
}
void Veiculo::setVel(int vel) {
    this->vel = vel;
}
int Veiculo::getVel() {
    return this->vel;
}
void Veiculo::setLigado(bool ligado) {
    this->ligado = ligado;
}
bool Veiculo::getLigado() {
    return this->ligado;
}

#endif