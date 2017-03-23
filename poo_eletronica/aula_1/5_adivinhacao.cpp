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
