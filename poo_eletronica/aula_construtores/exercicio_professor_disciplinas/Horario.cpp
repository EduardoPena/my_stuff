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
