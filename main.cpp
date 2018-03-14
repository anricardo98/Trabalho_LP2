#include <iostream>
    using std::cout;
    using std::cin;
    using std::endl;
#include "dados_soma.hpp"
#include <cstdlib>

int main (int argc, char* argv[]){
    dados lancamento;

    lancamento.quantidade = atoi(argv[1]);

    lancamento.soma();

    return 0;
}
