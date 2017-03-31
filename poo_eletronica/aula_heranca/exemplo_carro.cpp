#include<iostream>
#include<string>
using namespace std;
 
class VeiculoRodoviario{
        int rodas;
        int passageiros;
    public:
        void setRodas(int rodas) { this->rodas = rodas; }
        int getRodas() { return rodas; }
        void setPassageiros(int pasasgeiros) { this->passageiros = pasasgeiros; }
        int getPassageiros() { return passageiros; }
};

class Caminhao : public VeiculoRodoviario {
          int carga;
    public:
           void setCarga(int carga) { this->carga = carga; }
           int getCarga() { return carga; }
           void mostrar();
};

enum TipoCarro {carro, van, vagao};
class Automovel : public VeiculoRodoviario {
        enum TipoCarro car_tipo;
    public:
        void setTipo(TipoCarro t) { car_tipo = t; }
        enum TipoCarro getTipo() { return car_tipo; }
        void mostrar();
};
void Caminhao::mostrar(){
        cout << "Rodas: " << getRodas() << "\n";
        cout << "Passageiros: " << getPassageiros() << "\n";
        cout << "Carga (capacidade em litros): " << carga << "\n";
}
void Automovel::mostrar()
        {
        cout << "Rodas: " << getRodas() << "\n";
        cout << "Passageiros: " << getPassageiros() << "\n";
        cout << "TipoCarro: ";
        switch(getTipo()) 
                {
                case van: cout << "Van\n";
                          break;
                case carro: cout << "Carro\n";
                          break;
                case vagao: cout << "Vagao\n";
                }
 }
 int main(){
    Caminhao c1, c2;
    c1.setRodas(18);
    c1.setPassageiros(2);
    c1.setCarga(3200);
    c2.setRodas(6);
    c2.setPassageiros(3);
    c2.setCarga(1200);
    c1.mostrar();
    cout << endl;
    c2.mostrar();
    cout << endl;

    Automovel a1;
    a1.setRodas(4);
    a1.setPassageiros(6);
    a1.setTipo(van);
    a1.mostrar();

    cout <<  van << endl;

    return 0;
 }