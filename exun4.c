#include <stdio.h>

main(){
    /*4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.*/
    //declarar variaveis
    float real, dolar, converter;

   
    printf("Qunato voce tem em reais: ");
    scanf("%f", &real);

    //operacao
    dolar = 4.87;
    converter = real / dolar;

    //saida de dados
    printf("Voce tem %f Dolares: ", converter);
    return 0;
}