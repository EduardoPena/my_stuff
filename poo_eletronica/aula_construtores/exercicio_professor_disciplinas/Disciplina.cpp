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
