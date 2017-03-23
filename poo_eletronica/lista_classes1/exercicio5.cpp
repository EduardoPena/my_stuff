#include <iostream>
using namespace std;

class Relogio{
  private:
    int horas, minutos, segundos;
  public:
    void setHora(int, int, int);
    void getHora(int &, int &, int &);
    int avancarHorario();
    void imprimeHorario();
    Relogio();
};
void Relogio::imprimeHorario(){
  cout << "horas atual: " << horas 
       << ":" << minutos << ":" << segundos << endl; 
}

void Relogio::setHora(int h, int m, int s){
  horas=h;
  minutos=m;
  segundos=s;
}

void Relogio::getHora(int &h, int &m, int &s){
  h=horas;
  m=minutos;
  s=segundos;
}

int Relogio::avancarHorario(){
  if(segundos == 59){
    segundos=0;
    if(minutos==59){
      minutos=0;
      if(horas==23){
        horas=0;
      }
      else{
        horas++;
      }
    }
    else{
      minutos++;
    }

  }
  else{
    segundos++;
  }
}

Relogio::Relogio(){
  horas=0;
  minutos=0;
  segundos=0;
}


main (){
  Relogio clock;

  clock.imprimeHorario();
  for(int i=1; i<= 86399; i++)
    clock.avancarHorario();
  clock.imprimeHorario();

  clock.setHora(0,0,0);

  clock.imprimeHorario();
  for(int i=1; i<= 86400; i++)
    clock.avancarHorario();
  clock.imprimeHorario();

  clock.setHora(0,0,0);

  clock.imprimeHorario();
  for(int i=1; i<= 126400; i++)
    clock.avancarHorario();
  clock.imprimeHorario();

  int h=1,m=1,s=1;

  clock.getHora(h,m,s);

  cout << "horas atual por referencia: " << h 
       << ":" << m << ":" << s << endl; 


}