#include <iostream>

using namespace std;

// CRIANDO UMA CLASSE
class MoldeParaObjetos {

// PÚBLICO:
public:

    // CARACTERÍSTICAS DA CLASSE
    int valor1;
    bool valor2;
    string valor3;

    // PROTOTIPANDO UM MÉTODO
    void comportamento();

    // GETTERS e SETTERS para a variável 4.
    string getValor4() { return this->valor4; }
    void setValor4(string valor4) { this->valor4 = valor4; }

// PRIVADO:
private:

    // CARACTERÍSTICAS PRIVADAS
    string valor4 = "INACESSÍVEL";

// PROTEGIDO:
protected:

    // Não há variáveis protected

};

void MoldeParaObjetos::comportamento() {

    cout << "Este método foi declarado FORA da classe, mas foi \nprototipado dentro dela." << endl;

}

// AULA 41
int main(int argc, char *argv[]) {

    // INSTANCIANDO UM OBJETO:
    MoldeParaObjetos obj1;

    // ADICIONANDO VALORES AS CARACTERÍSTICAS DO OBJETO1
    obj1.valor1 = 10;
    obj1.valor2 = false;
    obj1.valor3 = "Nicky";

    // ACESSANDO A CARACTERÍSTICA PRIVADA ATRAVÉS DO GET e SET
    cout << obj1.getValor4() << endl;
    obj1.setValor4("ACESSÍVEL ATRAVÉS DO GET e SET");
    cout << obj1.getValor4() << endl;

    return 0;
}

/*
    Object Oriented Programming - OOP
    Programação Orientada a Objetos - POO

    Um paradigma de programação criado para simular
    o mundo real, ele nasceu com a linguagem C++.
    Ele possuia 2 objetivos, o primeiro era tornar
    a programação mais compreensível, ao imitar o
    mundo real, cheio de objetos. O segundo era facilitar
    a reutilização de código.


    Pense em uma classe como um molde, nela está específicado
    TUDO o que um certo objeto precisa ter. Que são divididos
    em duas coisas:

    Características - São variáveis que representam algo daquele
    objeto. Velocidade, dano, estamina, mana, vida...

    Comportamentos - Métodos/Funções que simulam ações, no geral
    são representados por verbos. Mover, Atacar, Pular, pegar...


    Outro conceito que será explorado é o ENCAPSULAMENTO.
    Que faz referência ao bom costume de deixar "invisivel"
    partes do código que não precisam ser acessadas por outros
    arquivos.

    Isso torna o código mais seguro, porém um pouco mais regrado,
    são utilizados os modificadores de acesso, são eles:

    public - Toda esta parte do código é PUBLICA, pode ser acessada
    e modificada por qualquer outro método ou objeto.

    private - Esta parte do código não pode ser acessada fora do
    próprio objeto.

    protected - Esta parte do código só pode ser acessada através
    do objeto que foi instanciado dela e das classes "Filhos".

    Normalmente todas as variáveis da classe são privadas, nós
    utilizamos os métodos GETTERS e SETTERS para alterar ou
    acessar estas características o objeto.
*/