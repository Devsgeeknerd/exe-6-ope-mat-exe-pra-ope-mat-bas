#include <stdio.h>
#include <stdlib.h>

void main()
{
    float custoFinal;
    float custoFabrica;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);

    float imposto = custoFabrica * 45 / 100;

    float distribuidor = custoFabrica * 28 / 100;

    custoFinal = custoFabrica + distribuidor + imposto;

    printf("O custo final do carro sera de : %0.2f", custoFinal);
    return 0;
}
