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
