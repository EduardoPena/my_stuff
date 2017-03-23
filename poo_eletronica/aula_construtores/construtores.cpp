#include<iostream>
using namespace std;
 
class Circulo{
    private :
        double raio; //class data members
    public:
        Circulo(){
            raio = 0;
        }
        Circulo(double r){
            raio = r;
        }
        Circulo(Circulo &t){
            raio = t.raio;
        }
        void setRaio(double r){
            raio = r;
        }
        double getArea(){
            return 3.14 * raio * raio;
        }
        ~Circulo()
        {} 
};
 
int main()
{
    Circulo c1; //defalut constructor invoked
    Circulo c2(2.5); //parmeterized constructor invoked
    Circulo c3(c2); //copy constructor invoked
    
    cout << c1.getArea()<<endl;
    
    cout << c2.getArea()<<endl;

    c2.setRaio(3.5);

    cout << c2.getArea()<<endl;

    Circulo c4=c2;
    c4.setRaio(10);

    cout << c2.getArea()<<endl;
    cout << c4.getArea()<<endl;




    return 0;
}