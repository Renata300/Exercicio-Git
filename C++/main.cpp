/* Esse código consiste da implementação de aluguel de carros através da linguagem C++ */

#include <iostream>
#include <string>
using namespace std;

class Carro {
	private:
		string nome;
	public:
		Carro(string);
		Carro();
		~Carro();
		void setNome (string);
		string getNome();
};
Carro::Carro(string nome)
{
	this->nome=nome;
}
Carro::Carro(){}
Carro::~Carro(){}
void Carro::setNome (string nome){
	this->nome=nome;
}
string Carro::getNome (){
	return nome;
}
int main () {
	int n;
	string nome;
cout << "Digite quantos carros você quer adicionar ao catálogo";
cout << '\n';
cin >> n;
Carro Carros[n];
for (int i=0; i<n; i++){
	cout << "Digite o nome do carro a ser adicionado ao catálogo";
	cout << '\n';
	cin >> nome;
	Carros[i].setNome(nome);
}
cout <<'\n';
cout << "------Lista de Carros: ------";
cout <<'\n';
for (int i=0; i<n;i++){
	cout << Carros[i].getNome();
	cout << '\n';
}
}
