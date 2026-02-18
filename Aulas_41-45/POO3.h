#ifndef POO3_H_INCLUDED
#define POO3_H_INCLUDED

class Jogador {

private:
    int vida;
    int estamina;
    int mana;

public:

    // CONSTRUTORES
    Jogador();
    Jogador(int vida, int estamina, int mana);

    // SETTERS
    void setVida(int vida);
    void setEstamina(int estamina);
    void setMana(int mana);

    // GETTERS
    int getVida();
    int getEstamina();
    int getMana();

};

// CONSTRUTOR PADRÃO
inline Jogador::Jogador() {
    this->vida = 0;
    this->estamina = 0;
    this->mana = 0;
}

// CONSTRUTOR
inline Jogador::Jogador(int vida, int estamina, int mana) {
    this->vida = vida;
    this->estamina = estamina;
    this->mana = mana;
}

// SETTERS
inline void Jogador::setVida(int vida) { this->vida = vida; }
inline void Jogador::setEstamina(int estamina) { this->estamina = estamina; }
inline void Jogador::setMana(int mana) { this->mana = mana; }

// GETTERS
inline int Jogador::getVida() { return this->vida; }
inline int Jogador::getEstamina() { return this->estamina; }
inline int Jogador::getMana() { return this->mana; }

#endif