#ifndef STOCK_H
#define STOCK_H


#include<iostream>
#include<string>

using namespace std;

class Stock{
    private:
    string empresa;
    int acoes;
    double valor_acao;
    double valor_total;
    void set_tot();
    public:
    Stock(); // default construtor
    Stock(string& empresa, int acoes = 0, double valor_acao = 0.0);
    ~Stock(); // destrutor
    void comprar(int num, double price);
    void vender(int num, double price);
    void atualizar(double price);
    void mostrar();
};

#endif // STOCK_H
