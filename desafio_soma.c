#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma;

    printf("Digite um numero com dois ou mais digitos: \n");
    scanf("%d", &numero);

    soma = 0;

    while (numero>0){
        soma += numero % 10;
        numero /= 10;

    }
    printf ("A soma dos digitos e igual %d\n", soma);

    return 0;
}
