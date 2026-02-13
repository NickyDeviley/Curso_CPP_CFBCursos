#include <iostream>
#include <string>

using namespace std;

int main() {

    /*
        O que é ENUMERAÇÃO?

        A enumeração é uma maneira mais simplificada
        de lidar com valores específico. Ao invés de
        enviar números de um lado para o outro, o que
        tornaria o programa confuso e desorganizado,
        podemos utilizar os valores enumerados.
    */

    enum valores {

        /*
            O enum funciona como um nova variável,
            nós podemos declarar uma variavel do tipo "valores"
            que pode receber algum dos três valores declarados a baixo.

            Cada uma dessas constantes criadas equivale a um número
            inteiro que começa em 0, mas nós podemos atribuir valores
            a estas constantes.

            Podemos utilizar como identificadores, para lidar com
            certas condições. Exemplo:

            Um jogador pode escolher sua arma no início do jogo,
            ao invés de utilizar números ou strings para identificar
            a escolha do jogador, podemos utilizar o ENUM, que simplifica
            o entendimento do código.
        */
        
        DEZ,            // 0
        VINTE,          // 1
        TRINTA,         // 2
        QUARENTA = 40

    };

    // Duas maneiras de chamar o enum normal
    valores teste = QUARENTA;   // 40
    valores teste1 = valores::TRINTA;

    cout << teste << endl;      // Imprime o valor da constante (40)
    cout << to_string(teste) << endl;

    /*
        Além do enum padrão, também existe o enum class, que é uma
        versão mais recente e mais fácil de se trabalhar em relação
        ao Enum original, exemplificado acima.

        Quais são suas vantagens:
        Para se referir a um elemento do enum class, você
        precisa utilizar o nome do enum para declarar uma variável.

        O enum class, ao contrário do enum normal, não se converte
        implícitamente para inteiro. O enum normal, como explicado
        anteriormente ele pode ser referido e tratado como um
        número inteiro, o que pode causar conflito.
    */

    enum class diaSemana {

        /*
            Declarando o enum class e suas
            constantes
        */

        DOMINGO,
        SEGUNDA,
        TERCA,
        QUARTA,
        QUINTA,
        SEXTA,
        SABADO

    };

    // Ao contrário do enum normal, nós somos
    // OBRIGADOS a utilizar o nome do enum
    // para declarar esta variável.
    diaSemana dia1 = diaSemana::DOMINGO;

    // Não é possível imprimir diretamente o valor da
    // variável, nem converter ela para string automaticamente,
    // é necessário converter na mão o valor para String.

    //string val = to_string(dia1);
    //cout << val << endl;   // Saida: DOMINGO



    return 0;
}

