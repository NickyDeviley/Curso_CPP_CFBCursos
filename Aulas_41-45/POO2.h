#ifndef POO2_H_INCLUDED
#define POO2_H_INCLUDED

#include <iostream>
#include <string>

    class Cachorro {

    public:

        // VARIÁVEIS
        int idade;
        int peso;
        std::string raca;

        // METODOS
        void latir();
        void correr();

        // MÉTODOS CONSTRUTORES
        Cachorro();
        Cachorro(int idade, int peso, std::string raca);


    };

    // CONSTRUTOR PADRÃO
    inline Cachorro::Cachorro() {

        this->idade = 0;
        this->peso = 0;
        this->raca = "";

    }

    // CONSTRUTOR COM INICIAÇÃO DE VALORES
    inline Cachorro::Cachorro(int idade, int peso, std::string raca) {

        this->idade = idade;
        this->peso = peso;
        this->raca = raca;

    }

    inline void Cachorro::latir() {

        std::cout << "Au Au" << std::endl;

    }
    inline void Cachorro::correr() {

        std::cout << "O cachorro correu!" << std::endl;

    }

#endif