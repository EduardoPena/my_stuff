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
  
}