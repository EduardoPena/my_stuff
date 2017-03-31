#include "Stock.h"

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
