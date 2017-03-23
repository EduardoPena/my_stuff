/* Exemplo 2.1 */
#include <iostream>
using namespace std;

int main()
{
  int entrada = 0;

  do {
    cout << "Entrada (-1 = quit): ";

    if (!(cin >> entrada)) {
      cout << "Entre apenas com numeros." << endl;
      cin.clear();
      cin.ignore(10000,'\n');
    }
    if (entrada != -1) {
      cout << "Voce entrou " << entrada << endl;
    }
  }
  while (entrada != -1);
  cout << "Tudo feito." << endl;

  return 0;
}
