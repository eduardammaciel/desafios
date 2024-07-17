#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N; //N = quantidade de botas
    printf ("Quantidade de botas: \n"); //determinar o valor
    scanf ("%d", &N); // ler o valor

    if (N % 2 == 0) { // identifica se a quantidade de botas é par para continuar
        int total_N = 0; //total de botas
        int tamanho[100] = {0}; // Array para armazenar a contagem de botas por tamanho

        for (int i = 0; i < N; i++) { //determiando o tamanho e o lado da bota
            int M; //M = tamanho
            char L; //L = lado do pé
            printf("Digite o tamanho da bota e o lado do calçado, use E para esquerdo e D para direito %d: \n", i+1);
            scanf("%d %c", &M, &L);

           // lado do pé da bota
        if (L == 'E' || L == 'e') {
            tamanho[M]++;
        } else if (L == 'D' || L == 'd') {
             tamanho[M]++;
            // Se for uma bota do pé direito, verifica se há um par correspondente
            if (tamanho[M] > 0) {
                total_N++;
                tamanho[M]--; // Remove a bota do pé esquerdo correspondente
            } else {
                tamanho[M]--; // Marca a bota do pé direito como não emparelhada
            }
        }

    } //fim - determiando o tamanho e o lado da bota

    printf("Numero total de pares corretos: %d\n", total_N);

    } //fim - identifica se a quantidade de botas é par para continuar


    return 0;
}
