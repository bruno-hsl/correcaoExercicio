#include <stdio.h>
#include <math.h>

main() {
    /*6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área.*/
    //Declaração
    float raio, area, pi;
    pi = 3.14;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    //operacao
    area = pi *  (raio * raio) ;

    //Saída
    printf("A area do circulo é: %.2f", area);

    return 0;
}