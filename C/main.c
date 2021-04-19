#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int i = 0, j = 0;

struct cadastro_cliente
{
    char nome[40];
};

struct cadastro_cliente Cliente[100];

struct cadastro_carro
{
    char modelo[20];
};

struct cadastro_carro Carro[100];

int cadastro_de_clientes(void);
int list_cliente(void);
int cad_carro(void);
int mostra_clientes(void);

int cadastro_de_clientes(void)
{
    printf("Cadastro %d de 100\n", j);
    if (j < 100)
    {
        printf("Digite o nome do Cliente: ");
        gets(Cliente[j].nome);
        j++;
    }
    return (0);
}

int list_cliente(void)
{
    int k = 0;
    
    if (Cliente[k] != 0)
    {
        k++;
        printf("\nNome do Cliente: %s\n", Cliente[k].nome);
        getch();
    }
    return (0);
}

int cad_carro(void)
{  
    printf("Cadastro de carro %d de 100\n", i);
    if (i < 100)
    {
        printf("Digite o modelo do carro: ");
        gets(Carro[i].modelo);
        i++;
    }
    return (0);
}

int mostra_clientes(void)
{
    for (j = 0; j < 100; j++)
    {
        printf("Cliente: %c", Cliente[i].nome);
    }
    return (0);
}

int main(void)
{
    cadastro_de_clientes();
    printf("\n");

    list_cliente();
    printf("\n");

    cad_carro();
    printf("\n");

    mostra_clientes();
    printf("\n");
}