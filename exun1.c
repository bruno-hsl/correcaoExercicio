#include <stdio.h>

main(){
    /*1. Escreva um programa que receba dois números e mostre a soma,
     a subtração, a multiplicação e a divisão desses números.*/

    //declaracao de variaveis
    int n1, n2, soma, div, mult, sub;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    //operacao
    soma = n1 + n2;
    sub = n1 - n2;
    div = n1 / n2;
    mult = n1 * n2;

    //saida de dados
    printf("Soma: %d", soma);
    printf("Subtracao: %d", sub);
    printf("Divisao: %d", div);
    printf("MUltiplicacao: %d", mult);    return 0;
}
