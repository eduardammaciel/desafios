#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_vet(char* vet, int tam);
void comparar_vet(char* vet1, char* vet2, int p1, int p2);

int main() {
    int tam1, tam2, comparar, p1, p2;
    char* vet1;
    char* vet2;

    printf("Digite a quantidade de caracteres da primeira cadeia: ");
    scanf("%d", &tam1);

    printf("Digite a quantidade de caracteres da segunda cadeia: ");
    scanf("%d", &tam2);

    vet1 = (char*)malloc((tam1 + 1) * sizeof(char));
    vet2 = (char*)malloc((tam2 + 1) * sizeof(char));

    if (vet1 == NULL || vet2 == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    ler_vet(vet1, tam1);
    ler_vet(vet2, tam2);

    printf("Digite a quantidade de comparacoes: ");
    scanf("%d", &comparar);

    for (int i = 0; i < comparar; i++) {
        printf("Digite a posicao de inicio: ");
        scanf("%d", &p1);
        printf("Digite a posicao final: ");
        scanf("%d", &p2);
        comparar_vet(vet1, vet2, p1 - 1, p2 - 1);
    }

    free(vet1);
    free(vet2);

    return 0;
}

void ler_vet(char* vet, int tam) {
    printf("Digite a sequencia desejada: ");
    for (int i = 0; i < tam; i++) {
        scanf(" %c", &vet[i]);
    }
    vet[tam] = '\0';
}

void comparar_vet(char* vet1, char* vet2, int p1, int p2) {
    int substring_tam = p2 - p1 + 1;
    char* substring = (char*)malloc((substring_tam + 1) * sizeof(char));
    int vet1_tam = strlen(vet1);
    int repeticoes = 0;

    for (int i = p1; i <= p2; i++) {
        substring[i - p1] = vet2[i];
    }
    substring[substring_tam] = '\0';

    for (int i = 0; i <= vet1_tam - substring_tam; i++) {
        if (strncmp(&vet1[i], substring, substring_tam) == 0) {
            repeticoes++;
        }
    }

    printf("%d\n", repeticoes);
    free(substring);
}
