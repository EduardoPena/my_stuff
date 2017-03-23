/* Exemplo 3 */
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string nome;
  cout << "Qual eh seu nome completo? ";
  getline (cin, nome);
  cout << "Ola " << nome << ".\n";
  cout << "Qual eh seu nome completo? ";
  cin >> nome;
  cout << "Ola " << nome << endl;
  return 0;
}

