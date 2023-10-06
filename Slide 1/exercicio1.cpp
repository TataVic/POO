/* Exercicio 1 - Slide da Aula 1 */
/* Escreva um programa que solicite ao usuário que digite seu nome e, em seguida,*/
/* imprima uma mensagem de boas-vindas com o nome digitado. */
#include<iostream>
#include<string>

using namespace std;
int main(){
    string nome; 
    cout<<"Digite seu nome: ";
    cin>>nome;
    cout<<"Seja bem vindo(a) "<<nome<< "!"<<endl;
    return 0;
}