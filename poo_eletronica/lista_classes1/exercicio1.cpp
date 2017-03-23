#include <iostream>
using namespace std;

class Retangulo {
  private:
    int comprimento, altura;
  public:
    void defineValores (int,int);
    int area(); 
};

void Retangulo::defineValores (int x, int y) {
  comprimento = x;
  altura = y;
}

int Retangulo::area(){
  return comprimento*altura;
}

int main () {
  Retangulo rect;
  rect.defineValores (3,4);
  cout << "area: " << rect.area() << endl;
  return 0;
}