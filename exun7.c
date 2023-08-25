#include <stdio.h>

main(){
    /*7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos,
     meses e dias e escreva a idade dessa pessoa expressa apenas em dias.
     Considerar ano com 365 dias e mês com 30 dias.*/
     
    //declaracao 
    int ano, mes, dia, TotalEmDias;

    printf("\nDigite sua data de nascimento");
    printf("Ano: ");
    scanf("%d",&ano);
    printf("Mes: ");
    scanf("%d", & mes);
    printf("Dia: ");
    scanf("%d", &dia);

    //operacao
    TotalEmDias = ((2023-ano)*365) + (mes*30) + dia;
 
    //saida
    printf("%d", TotalEmDias);


    return 0;
}