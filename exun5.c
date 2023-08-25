#include <stdio.h>

main(){
    /*5. Faça um programa em que o usuário digite o custo de uma determinada mercadoria,
    em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado).
    Para concluir,o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.*/

    //declarar
    float custo, frete, despesas, venda, lucro, total, porcentagem;

    printf("Custo da mercadoria: ");
    scanf("%f", & custo);

    printf("Custo do frete: ");
    scanf("%f", & frete);

    printf("Despesas: ");
    scanf("%f", & despesas);

    //operacao
    total = custo + frete + despesas;

     printf("O produto custa: %.2f Qual o valor de venda do produto: ", total);
    scanf("%f", & venda);


    lucro = venda - total;

    porcentagem = lucro / total * 100;
  
    

    //saida de dados
    printf("\nlucro: %.2f", lucro);
    printf("porcentagem de lucro: %.2f%%", porcentagem);


    return 0;
}