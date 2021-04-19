#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <iterator>
using namespace std;

class Carro
{
private:
    string nome;

public:
    Carro(string);
    Carro(); // construtor vazio para poder criar um vetor
    ~Carro();
    void setNome(string);
    string getNome();
};

Carro::Carro(string nome)
{
    this->nome = nome;
}

Carro::Carro() {}
Carro::~Carro() {}

void Carro::setNome(string nome)
{
    this->nome = nome;
}

string Carro::getNome()
{
    return nome;
}

int main()
{
    int n;
    string nome;
    vector<Carro> Carros;
    cout << "Digite quantos carros você quer adicionar ao catálogo";
    cout << '\n';
    cin >> n;
    string nomes[n];
    string *p = nomes;

    //Carro *carros=new Carro[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Digite o nome do carro a ser adicionado ao catálogo";
        cout << '\n';
        cin >> nome;
        Carro c(nome);
        Carros.push_back(c);
        nomes[i] = c.getNome();
    }
    cout << '\n';
    cout << "------Lista de Carros: ------";
    cout << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << nomes[i];
        cout << '\n';
    }
}
