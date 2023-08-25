#include <stdio.h>

main(){
    /*9. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor*/
    //declaracao de variaveis
    float Cfabrica, distribuidor, imposto, final;

    printf("Custo de fabrica do veiculo: ");
    scanf("%f", &Cfabrica);

    //operacao
    distribuidor = (Cfabrica * 0.28);
    imposto = (Cfabrica * 0.45);
    final = Cfabrica + distribuidor + imposto;

    //saida
    printf("Valor final do veiculo: %f", final);

    return 0;
}