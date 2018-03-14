#include<iostream>
using std::cout;
using std::cin;
using std::endl;
#include "dados_soma.hpp"
#include <cstdlib>

void dados::soma(){
    int numero, soma, contador;
    soma = 0;

    for (contador = 0; contador < dados::quantidade; contador++){
        numero = rand() %6 + 1;
        soma = numero + soma;
        cout << "Dado: " << contador + 1 << endl;
        cout << "Valor:" << numero << endl;
    }

    cout << "A soma dos dados sera: " << soma << endl;
}
