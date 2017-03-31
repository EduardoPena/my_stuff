#include <iostream>
using namespace std;

class Aluno {
friend class Professor;  /* now Professor is a friend of Aluno’s */
private:
  int id;
  double gpa;
  char *nome;
public:
  Aluno() {
    id = 0;
    gpa = 3.0;
    nome = "null";
  }
  int getid() { return id; }
  double getgpa() { return gpa; }
  char* getname() { return nome; }
  void changeid(int newid) { id = newid; }
  void changegpa(double newgpa) { gpa = newgpa; }
  void changename(char *newname) { nome = newname; }
};
	
class Professor {
private:
  Aluno *students;
  int size;
public:
  Professor(int num) {
    students = new Aluno[num];
    size = num;
  }
  void renewid();
  void changegpa(int id, double newgpa);
  double getgpa(int id);
};

void Professor::renewid() {
  int i;
  for(i=0; i<size; i++) 
    students[i].id = i;	/* accessing Aluno’s private data */
}

void Professor::changegpa(int id, double newgpa) {
  int i;
  for(i=0; i<size; i++) {
    if(students[i].id == id) {  /* accessing Aluno’s private data: id */
      students[i].gpa = newgpa;  /* accessing Aluno’s private data */
      return;
    }
  }
}

double Professor::getgpa(int id) {
  int i;
  for(i=0; i<size; i++) 
    if(students[i].id == id)  /* accessing Aluno’s private data: id */
      return students[i].gpa;  /* accessing Aluno’s private data */
  return -1;
}
	
int main(){
  int i;
  Professor amr(100);

  for(i=0; i<100; i++)
    amr.renewid();	
  amr.changegpa(50, 3.99);
  cout << "ID#50 has " << amr.getgpa(50) << " GPA.\n";
  return 0;
}