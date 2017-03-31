#include <iostream>
#include "Professor.h"

using namespace std;

std::ostream& operator<<(std::ostream &strm, const Horario &h) {
  return strm << h.dia_semana << " das " << h.hora_inicio << " ate " << h.hora_fim;
}

int main(){

    Horario h1;
    Horario h2("Terça-Feira","13:00","14:50");
    Horario hs1[]={h1,h2};
    Disciplina d1("Prog Orie  Obj", "POO41", "Programando com objetos", hs1);

    Horario h3;
    Horario h4("Quarta-Feira","13:00","14:50");
    Horario hs2[]={h3,h4};
    Disciplina d2("Prog Estruturada", "EST40", "Programando com objetos", hs2);
    cout << d2.infoDisciplina() << " " <<d2.getHorarios()[0] << endl;

    string nome="Pena";
    string registro="1203-12";
    string departamento="Computacao";
    string data_adm="07/04/20115";
    Disciplina disc_pena[]={d1,d2};

    Professor pena(nome,  departamento, data_adm, registro, disc_pena);

    cout << pena.infoProfessor() << endl;

    return 0;
}
