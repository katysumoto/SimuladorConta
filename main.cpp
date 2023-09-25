#include <iostream>
#include "conta.h"

using namespace std;

int main()
{
    Conta a, b;
    a.criar(500);
    a.exibir();
    b.criar(500);
    b.exibir();
    a.transferir(200, &b);
    a.exibir();
    b.exibir();
    return 0;
}
