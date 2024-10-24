#include <stdio.h>

// Inclusão da biblioteca criada com aspas para mostrar que ela é do arquivo local
#include "MathFunc.h"

int main()
{

    int x, y;
    printf("Digite um valor: ");
    scanf("%d", &x);
    printf("O fatorial de %d:  %d\n", x, fatorial(x));
    printf("O somatorio de %d: %d\n", x, somatorio(x));
    printf("Digite mais um valor: ");
    scanf("%d", &y);
    printf("A soma = %d \n", soma(x, y));
    printf("A subtracao = %d\n", sub(x, y));
    printf("A potenciacao  = %d\n", potencia(x, y));
    printf("A divisao = %d\n", div(x, y));

}