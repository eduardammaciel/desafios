#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n; //n de jogadores
    int m; //n de partidas
    int nGolsTodasm = 0; // jogadores com gols em todas as partidas

    printf ("Digite o numero de jogadores e de partidas:\n"); // determinar quantidade de jogadores e jogos
    scanf ("%d %d", &n, &m);

    int matriz [n][m];

    for (int i=0; i<n; i++) { //quantidade de gols de cada jogador em cada jogo
        printf ("Gols do jogador %d:\n", i+1);
        for (int j=0; j<m;j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0; i<n; i++) { //identificar se o jogador fez gol em todas as partidas
        int jogosComGols = 0;
     for (int j=0; j<m; j++) {
            if (matriz [i][j] > 0) {
                jogosComGols++;
            }
        }

        if (jogosComGols == m) {
            nGolsTodasm++;
        }
    }
    printf("Numero de jogadores que fizeram gols em todos os jogos: %d\n", nGolsTodasm);


    return 0;
}
