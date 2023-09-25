#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED


struct Conta
{
    float saldo;
    int numero;
    float limite;

    void exibir();
    void sacar(float valor);
    void depositar(float valor);
    void criar(float limite);
    void transferir(float valor, Conta *b);
};


#endif // CONTA_H_INCLUDED
