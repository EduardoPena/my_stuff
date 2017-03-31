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
