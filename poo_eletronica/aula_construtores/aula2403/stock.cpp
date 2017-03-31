#include<iostream>
#include<string>
using namespace std;

class Stock{
private:
	string empresa;
	int acoes;
	double valor_acao;
	double valor_total;
	void setValorTotal(){ valor_total = acoes * valor_acao; }
public:
	Stock();
	Stock(const char *, int , double );
	~Stock();
	void comprar(int num, double preco);
	void vender(int num, double preco);
	void atualizar(double preco);
	void mostrar();
};

Stock::Stock(){
	cout << "Construtor Padrão";
	empresa="sem nome";
	acoes= 0;
	valor_acao=0;
	valor_total=0;
}

Stock::Stock(const char *s, int acoes, double valor_acao){
	cout << "Construindo com o construtor sobrecarregado";

	if(acoes < 0) {
		cerr << "Numero de acoes nao ser negativa" << endl;
		acoes=0;
	}
	else
		this->acoes = acoes;
	this->empresa =string(s);
	this->valor_acao=valor_acao;
	setValorTotal();
}
 
Stock::~Stock(){
	cout <<" Objeto destruido"<< endl;
}

void Stock::comprar(int num, double preco){

	if(num <0)
		cerr << "Numero de acoes nao pode ser negativo";
	else{
		acoes+=num;
		valor_acao=preco;
		setValorTotal();
	}
}

void Stock::vender(int acoes, double valor_acao){
	if(acoes <0)
		cerr << "Numero de acoes nao pode ser negativo";
	else if(acoes > this->acoes)
		cerr << "Numero de acoes nao pode ser negativo";
	else{
		this->acoes-=acoes;
		this->valor_acao=valor_acao;
		setValorTotal();
	}

}

void Stock::atualizar(double valor_acao){
	this->valor_acao=valor_acao;
	setValorTotal();
}

void Stock::mostrar(){
	cout << "Empresa" << empresa << endl 
		 << "Acoes:" << acoes << endl
		 << "Preco Acao $: " << valor_acao << endl
		 << "Valor total $" << valor_total << endl; 
}


const int STKS=5;

int main(){
	cout.precision(2);
	cout.setf(ios_base::fixed, ios_base::floatfield);

	Stock stock1("Apple", 12, 20.0);
	stock1.mostrar();

	Stock stock2 = Stock("Microsoft", 2, 2.0);
	stock2.mostrar();

	Stock stocks[STKS]={
		Stock("Petrobras",100,1.0),
		Stock("BRF",100,0.1),
		Stock("JBS",200,0.2),
		Stock("Ford",300,100.0),
		Stock("Intel",1000,50.0),
	};

	for(int i=0; i< STKS; i++)
		stocks[i].mostrar();

    return 0;
}