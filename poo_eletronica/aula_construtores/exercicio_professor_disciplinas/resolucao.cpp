#ifndef HORARIO_H
#define HORARIO_H
#include <string>

using namespace std;

class Horario
{
    private:
        string dia_semana, hora_inicio, hora_fim;
        friend std::ostream& operator<<(std::ostream&, const Horario&);
    public:
        Horario();
        Horario(string, string, string);
        string getDiaSemana();
        virtual ~Horario();
};

#endif // HORARIO_H
#include "Horario.h"


Horario::Horario(){
    dia_semana="Segunda-Feira";
    hora_inicio="00:00";
    hora_fim="00:01";
}

Horario::Horario(string dia_semana, string hora_inicio, string hora_fim){
    this->dia_semana=dia_semana;
    this->hora_inicio=hora_inicio;
    this->hora_fim=hora_fim;
}

string Horario::getDiaSemana(){
    return dia_semana;
}

Horario::~Horario()
{
    //dtor
}
#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include "Horario.h"

class Disciplina
{
    public:
        Disciplina();
        Disciplina(string, string, string, Horario *);
        Disciplina(const  char *, const  char *, const char *, Horario *);
        string infoDisciplina();
        virtual ~Disciplina();
        Horario *getHorarios();
    private:
        string nome, codigo, ementa;
        Horario *horarios;
};

#endif // DISCIPLINA_H
#include "Disciplina.h"

Disciplina::Disciplina(){

}

Disciplina::Disciplina(string nome, string codigo, string ementa, Horario *horarios){
    this->nome=nome;
    this->codigo=codigo;
    this->ementa;
    this->horarios=horarios;
}

Disciplina::Disciplina(const char * nome, const char * codigo, const char * ementa, Horario * horarios){
    this->nome=string(nome);
    this->codigo=string(codigo);
    this->ementa=string(ementa);
    this->horarios=horarios;
}
string Disciplina::infoDisciplina(){
    return nome + " " + codigo + " " + ementa;
}

Horario * Disciplina::getHorarios(){
    return horarios;
}

Disciplina::~Disciplina()
{
    //dtor
}
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Disciplina.h"

class Professor
{
    public:
        Professor();
        Professor(string, string, string, string, Disciplina *);
        virtual ~Professor();
        string infoProfessor();
    private:
        string nome, nome_dept, data_adm, registro;
        Disciplina * disciplinas;
};

#endif // PROFESSOR_H
#include "Professor.h"

Professor::Professor(){
    //ctor
}

Professor::Professor(string nome,string nome_dept,string data_adm,string registro, Disciplina *disciplinas){
    this->nome=nome;
    this->nome_dept=nome_dept;
    this->data_adm=data_adm;
    this->registro=registro;
    this->disciplinas=disciplinas;
}

string Professor::infoProfessor(){
    return nome + " " +  nome_dept + " " + data_adm + " " + registro
    + " " + disciplinas[0].infoDisciplina() ;
}

Professor::~Professor()
{
    //dtor
}
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
