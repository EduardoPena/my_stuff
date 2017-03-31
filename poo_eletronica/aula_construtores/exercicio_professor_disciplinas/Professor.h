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
