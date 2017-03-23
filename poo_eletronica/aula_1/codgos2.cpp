/* Exemplo 1 */
#include <iostream>
using namespace std;

int main() {
  cout << "Olah mundo" << endl;
  return 0;
}
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
/* Exemplo 2 */
#include <iostream>
using namespace std;

int main() {
  int entrada = 0;

  do {
    cout << "Entre com um numero (-1 = sair): ";

    //falha se
    // alguma coisa que nao sejaint (o tipo de entrada) for digitado
    if (!(cin >> entrada)) {
      cout << "Voce entrou com um valor nao-sumerico. Saindo..." << endl;
      break;
      // sai do laco while
    }
    if (entrada != -1) {
      cout << "Voce entrou " << entrada << endl;
    }
  } while (entrada != -1);
  cout << "Tudo feito." << endl;
  return 0;
}
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

/* Exemplo 4 */
#include <iostream>
using namespace std;

int main() {
  cout << " 1\t2\t3\t4\t5\t6\t7\t8\t9" << endl << "" << endl;
  for (int c = 1; c < 10; c++) {
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      cout << i * c << '\t';
    }
    cout << endl;
  }
  return 0;
}
/* Exemplo 5 */
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main () {
  int numero_rand, palpite;
  srand (time(NULL));
  numero_rand = rand() % 100 + 1;

  cout << "Adivinhe o numero (1 to 100) ";
  do {
    if (!(cin >> palpite)) {
      cout << "Entre apenas com numeros" << endl;
    } else {
      if (numero_rand < palpite) cout << "O numero segreto eh menor que " << palpite << endl;
      else if (numero_rand > palpite) cout << "O numero segreto eh maior que" << palpite << endl;
    }
  } while (numero_rand != palpite);
  cout << "Parabens!" <<  endl;
  return 0;
}
/* Exemplo 6 */
#include <iostream>
using namespace std;

int main() {
  string str1 = "To be or not to be, that is the question";
  string str2 = "only ";
  string str3 = str1.substr(6, 12);
  str1.insert(32, str2);
  str1.replace(str1.find("to be", 0), 5, "to jump");
  str1.erase(9, 4);
  cout << str1 << endl;
  for (int i = 0; i < str3.length(); i++)
    cout << str3[i]; cout << endl;
}
