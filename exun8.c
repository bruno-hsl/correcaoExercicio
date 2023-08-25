#include <stdio.h>

main(){
    /*8. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o 
    percentual de reajuste. Calcular e escrever o valor do novo salário.*/

    //declaracao de variaveis
    float salario, reajuste, novoSalario;

    printf("Digete seu salario atual: ");
    scanf("%f", &salario);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &reajuste);


    //operacao
    novoSalario =  salario + (reajuste / 100.0) * salario;

    //saida
    printf("Salario com reajuste: %f", novoSalario);
    
    return 0;
}