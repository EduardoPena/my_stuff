#include <iostream>
using namespace std;

class Retangulo{
    int comprimento, altura;
    public:
    void definirValores(int, int);// Definição
    int area();
    void imprimeInformacoes();
};
// implementação do metodo definir valores
void Retangulo::definirValores(int x, int y){
    comprimento= x;
    altura= y;
}

int Retangulo::area(){
    return comprimento * altura;
}

void Retangulo::imprimeInformacoes(){
    cout << "Comprimento: " << comprimento
        << " Altura: " << altura
        << " Area " << area() << endl;
}


int main(){

    Retangulo r1, r2, r3;

    r1.definirValores(100, 10);
    r1.imprimeInformacoes();

    int input1, input2;

    cin >> input1 >> input2;

    r2.definirValores(input1, input2);

    r2.imprimeInformacoes();



    return 0;
}
