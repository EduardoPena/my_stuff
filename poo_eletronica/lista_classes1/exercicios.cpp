#include <iostream>
using namespace std;

class Elevador{
  private:
    int andares_total, andar_atual, capacidade_max, qtde_pessoas;
  public:
    void inicializa(int, int);
    int entra(int);
    int sai(int);
    int sobe(int);
    int desce(int);
    void imprimeEstado();
};

void Elevador::inicializa(int capacidade, int andares_tot){
  andar_atual=1;
  capacidade_max=capacidade;
  andares_total=andares_tot;
}

int Elevador::entra(int num_pessoas){
  if(qtde_pessoas+num_pessoas> capacidade_max){
    cout << "Elevador cheio" << endl;
    return -1;// falha
  }
  else{
    qtde_pessoas+=num_pessoas;
    return 1;// sucesso
  }

}

int Elevador::sai(int num_pessoas){
  if(qtde_pessoas-num_pessoas<0){
    cout << "Não posso ter população negativa" << endl;
    return -1;// falha
  }
  else{
    qtde_pessoas-=num_pessoas;
    return 1;// sucesso
  }

}

int Elevador::sobe(int andares){
  if(andar_atual+andares > andares_total){
    cout << "Não posso subir tudo isso" << endl;
    return -1;// falha
  }
  else{
    andar_atual+=andares;
    return 1;// sucesso
  }

}

int Elevador::desce(int andares){
  if(andar_atual-andares <0){
    cout << "Não posso descer" << endl;
    return -1;// falha
  }
  else{
    andar_atual-=andares;
    return 1;// sucesso
  }

}
void Elevador::imprimeEstado(){
  cout << "Andar atual " << andar_atual << " de " << andares_total << endl;
  cout << "Qtde de pessoas atuais " << qtde_pessoas << " capacidad maxima " << capacidade_max << endl;
}


main (){
  Elevador *e = new Elevador();
  Elevador e2;

  e2.inicializa(10,100);
  e2.imprimeEstado();
  e2.sobe(13);
  e2.desce(3);
  e2.entra(10);
  e2.entra(11);
  e2.desce(2);
  e2.imprimeEstado();
  
}#include <iostream>
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