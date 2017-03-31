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
    Stock(string& empresa, int acoes = 0, double valor_acao = 0.0);
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
Stock::Stock(string& empresa, int acoes, double valor_acao){
    cout << "Construtor que usa const char * : " << empresa << " chamado\n";
    this->empresa= empresa;
    
    if (acoes < 0){
        cerr << "Numero de acoes nao pode ser negativa; "
    << empresa << " acoes setadas para 0.\n";
        this->acoes = 0;
    }
    else
        this->acoes = acoes;
        this->valor_acao = valor_acao;
        set_tot();
}

Stock::~Stock(){ // verbose class destructor
    cout << "Ateh mais, " << empresa << "!\n";
}

void Stock::comprar(int num, double valor_acao){
    if (num < 0){
        cerr << "Numero de acoes compradas nao pode ser negativo. "
    << "Transacao abortada.\n";
    }
    else{
        acoes += num;
        this->valor_acao = valor_acao;
        set_tot();
    }
}

void Stock::vender(int num, double valor_acao){
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
        this->valor_acao = valor_acao;
        set_tot();
    }
}
void Stock::atualizar(double valor_acao){
    this->valor_acao = valor_acao;
    set_tot();
}
void Stock::mostrar()
{
    using std::cout;
    using std::endl;
    cout << "Empresa: " << empresa    << " acoes: " << acoes << endl<< " preco acao: $" << valor_acao
     << " total do valor das acoes: $" << valor_total << endl;
}


const int STKS = 4;

int main(){
    
    cout.precision(2); // #.## format
    cout.setf(ios_base::fixed, ios_base::floatfield);// #.## format
    cout.setf(ios_base::showpoint); // #.## format

    string s1("Apple");
    string s2("Microsoft");
    string s3("BRF Foods");
    string s4("Coca Cola");


    Stock stocks[STKS] = {
		Stock(s1, 12, 20.0),
		Stock(s2, 200, 2.0),
		Stock(s3, 130, 3.25),
		Stock(s4, 60, 6.5)
	};

    cout << "Stock market :\n";
    int st; 
    for (st = 0; st < STKS; st++)
        stocks[st].mostrar();



    

    cout << "Feito\n";
    return 0;
}