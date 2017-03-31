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
