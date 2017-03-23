#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
void exemploStringsOut(){
    string s1("Venceu a loteria!");
	cout << s1 << endl;
	string s2(20, '$');
	cout << s2 << endl;
	string s3(s1);
	cout << s3 << endl;
	s1 += " Oops!";
	cout << s1 << endl;
	s2 = "Desculpe! isso foi ";
	s3[0] = 'T';
	s3[1] = 'o';
	s3[2] = 'r';
	string s4;
	s4 = s2 + s3;
	cout << s4 << endl;
	char caracteres[] = "Bem terminamos bem ...  ";
	string s5(caracteres,20);
	cout << s5 << "!\n";
	string s6(caracteres+15, caracteres + 18);
	cout << s6 << ", ";
	string s7(&s5[15], &s5[18]);
	cout << s7 << "...\n";
}

void exemploStringsIn(){
    char info[100];
    cin >> info; // le string
    cin.getline(info, 100); // le string e descarta \n
    cin.get(info, 100); // le uma linha, deixa \n ina pilha

    string palavra;
    cin >> palavra; // le uma string
    getline(cin, palavra);

    cin.getline(info,100,':'); // le ate aparecer :

    char nome[10];
    string sobrenome;
    cin >> nome; // pode gerar um erro se a entrada tive mais q 10 caracteres
    cin >> sobrenome; // le uma cadeia de caracteres bem longa
    cin.getline(nome, 10); // pode truncar a entrada
}

void comparacoesStrings(){
    string s1("Ananias");
    string s2("Joao");
    char s3[20] = "Beatriz";

    if (s1 < s2)
        cout << "s1 menor que s2" << endl;
    if (s1.length() < s2.length())
        cout << "s1 menor que s2 em tamanho" << endl;
    if (s1 == s3)
        cout << "s1 igual s3" << endl;
    if (s3 != s2)
        cout << "s3 diferente de s2" << endl;
}

void leituraStringsArquivo(){
    ifstream fin;

    fin.open("compras.txt");
    if (fin.is_open() == false){
        cerr << "Nao pude abrir o arquivo. Tchau.\n";
        exit(EXIT_FAILURE);
    }

    string item;
    int count = 0;
    getline(fin, item, ';');

    while (fin){
        ++count;
        cout << item;
        getline(fin, item, ';');
    }
    cout << endl <<"Total de Linhas arquivo:" << count << endl;

    cout << "Feito\n" << endl;
    fin.close();
}

int main(){
    //exemploStringsOut();
    //exemploStringsIn();
    //comparacoesStrings();
    //leituraStringsArquivo();

    forca();
	return 0;
}
