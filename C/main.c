/* Esse código consiste da implementação de aluguel de carros através da linguagem C */
 
#include <stdio.h> 
#include <conio.h> 
#include <string.h> 
#include <stdlib.h> 
 
int i = 0, j = 0; 
 
struct lista_carro 
{ 
    char modelo[20]; 
}; 
 
struct lista_carro Carro[100]; 
  
int lista_de_carros(void) 
{   
    printf("Cadastro de carro %d dos carros\n", i); 
    if (i < 100) 
    { 
        printf("Digite o modelo do carro: "); 
        gets(Carro[i].modelo); 
        i++; 
    } 
    return (0); 
} 
 
int main(void) 
{ 
    lista_de_carros(); 
    printf("\n"); 
} 
