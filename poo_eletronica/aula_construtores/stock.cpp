#include<iostream>
#include<string>
using namespace std;
 
class Stock{
    private:
    string empresa;
    int acoes;
    double valor_acao;
    double valor_total;
    void set_tot() { valor_total = acoes * valor_acao; }
    public:
    Stock(); // default construtor
    Stock(const char * co, int n = 0, double pr = 0.0);
    ~Stock(); // destrutor
    void comprar(int num, double price);
    void vender(int num, double price);
    void atualizar(double price);
    void mostrar();
};


Stock::Stock(){ // default constructor
    cout << "Construtor Default/Padrao Chamado\n";
    empresa = "sem nome";
    acoes = 0;
    valor_acao = 0.0;
    valor_total = 0.0;
}
Stock::Stock(const char * co, int n, double pr){
    cout << "Construtor que usa const char * : " << co << " chamado\n";
    empresa= string(co);
    
    if (n < 0){
        cerr << "Numero de acoes nao pode ser negativa; "
    << empresa << " acoes setadas para 0.\n";
        acoes = 0;
    }
    else
        acoes = n;
        valor_acao = pr;
        set_tot();
}

Stock::~Stock(){ // verbose class destructor
    cout << "Ateh mais, " << empresa << "!\n";
}
// other methods
void Stock::comprar(int num, double price){
    if (num < 0){
        cerr << "Numero de acoes compradas nao pode ser negativo. "
    << "Transacao abortada.\n";
    }
    else{
        acoes += num;
        valor_acao = price;
        set_tot();
    }
}

void Stock::vender(int num, double price){
    if (num < 0){
        cerr << "Numero de acoes vendidas nao pode ser negativa. "
    << "Transacao abortada.\n";
    }
    else if (num > acoes){
        cerr << "Nao pode vender mais do que voce tem! "
    << "Transacao abortada.\n";
    }
    else{
        acoes -= num;
        valor_acao = price;
        set_tot();
    }
}
void Stock::atualizar(double price){
    valor_acao = price;
    set_tot();
}
void Stock::mostrar()
{
    using std::cout;
    using std::endl;
    cout << "Empresa: " << empresa    << " acoes: " << acoes << endl<< " preco acao: $" << valor_acao
     << " total do valor das acoes: $" << valor_total << endl;
}

int main(){
    
    cout.precision(2); // #.## format
    cout.setf(ios_base::fixed, ios_base::floatfield);// #.## format
    cout.setf(ios_base::showpoint); // #.## format
    cout << "Usando construtores para criar um novo objeto\n";
    Stock stock1("Apple", 12, 20.0); // syntax 1
    stock1.mostrar();
    Stock stock2 = Stock ("Microsoft", 2, 2.0); // syntax 2
    stock2.mostrar();
    cout << "Atributindo stock1 para stock2:\n";
    stock2 = stock1;

    cout << "Listando stock1 e stock2:\n";
    stock1.mostrar();
    stock2.mostrar();

    cout << "Atualizando stock1 e stock2: (veja que eh por copia)\n";
    stock1.atualizar(10.0);
    stock1.mostrar();
    stock2.mostrar();



    cout << "Usando um construtor para resetar um objeto\n";
    stock1 = Stock("BRF Foods", 10, 50.0); // temp object
    cout << "Revisando stock1:\n";
    stock1.mostrar();
    cout << "Feito\n";
    return 0;
}