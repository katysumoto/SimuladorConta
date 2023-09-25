#include <iostream>
#include "Conta.h"

using namespace std;

int n=0;

void Conta::criar(float limite)
{
    this->saldo = 0;
    this->numero = n++;
    this->limite = limite;
}

void Conta::exibir()
{
    cout << "################" << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Numero: " << numero << endl;
    cout << "Limite: " << limite << endl;
    cout << "################" << endl;
    cout << endl;
}

void Conta::depositar(float valor)
{
    this->saldo += valor;
}

void Conta::sacar(float valor)
{
    if(valor <= saldo + limite)
        this->saldo -= valor;
    else
        cout << "Sua conta nao possui saldo o suficiente para a operacao" << endl << endl;
}

void Conta::transferir(float valor, Conta *b)
{
    if(valor <=saldo + limite)
    {
        this->saldo -= valor;
        b->depositar(valor);
    }
}
