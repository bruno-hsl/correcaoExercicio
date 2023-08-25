#include <stdio.h>

main() {
    /*10. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
     mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas.
      Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas,
       o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/

    //Declaração
    int numeroCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarroVendido, comissao, salarioFinal;

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numeroCarrosVendidos);

    printf("Digite o valor total de vendas: ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite a comissao por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    //operacao
    comissao = numeroCarrosVendidos * valorPorCarroVendido;
    salarioFinal = salarioFixo + comissao + (0.05 * valorTotalVendas);
    //Saída
    printf("\nSalario final do vendedor: %.2f\n", salarioFinal);

    return 0;
}