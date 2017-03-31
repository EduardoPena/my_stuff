#include <iostream>
using namespace std;

class Aluno {
friend int main();  /* main() is a friend of Aluno’s */
friend void mostraNota(Aluno s);  /* mostraNota() is another friend */
private:                 
  int id;
  double nota;
  char *nome;
public:
  Aluno() {
    id = 0;
    nota = 3.0;
    nome = "null";
  }
  int getid() { return id; }
  double getNota() { return nota; }
  char* getNome() { return nome; }
  void alteraId(int newid) { id = newid; }
  void alteraNota(double newgpa) { nota = newgpa; }
  void alteraNome(char *newname) { nome = newname; }
};
    
void mostraNota(Aluno s) {
/* accessing Aluno’s private data: nome, nota */
  cout << "The nota of " << s.nome << " is " << s.nota << ".\n";
}

int main() {
  Aluno michel, joao;

  michel.id = 101;
  michel.nota = 3.91;
  michel.nome = "Michael Wen";
/* accessing Aluno’s private data: id, nota */
  cout << michel.nome << "'s id is " << michel.id << " and nota is " << michel.nota << ".\n";
  joao.id = 102;
  joao.nota = 3.95;
  joao.nome = "joao Wang";
  mostraNota(joao);

  return 0;
}