#include <iostream>
using namespace std;

class Resultado {
  private:
    int a, b;
  public:
    void defineValores (int,int);
    int area(); 
};

void Resultado::defineValores (int x, int y) {
  a = b;
  b = y;
}

int Resultado::area(){
  return a+b;
}

int main () {
  Resultado rect;
  rect.defineValores (3,4);
  cout << "area: " << rect.area() << endl;
  return 0;
}