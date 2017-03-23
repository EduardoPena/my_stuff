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
