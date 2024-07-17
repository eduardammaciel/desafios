#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     float d, vf, vg, hip, ct, tf, tg;
    printf ("Indique a distancia: ");
    scanf ("%f", &d);
    printf("Indique a velocidade do fugitivo: ");
    scanf ("%f", &vf);
    printf("Indique a velocidade do guarda: ");
    scanf ("%f", &vg);

    ct = 12; //cateto = distância percorrida pelo fugitivo.

    hip = sqrt(pow(d,2)+pow(ct,2)); //hipotenusa = distância percorrida pelo guarda.


    tf = ct/vf; //tempo do fugitivo.
    tg = hip/vg; //tempo do guarda

    //verificar se o guarda consegue alcançar o fugitivo.
    if (tf>=tg){
        printf("S.\n"); //alcançou
    }else  {
        printf("N.\n"); //não alcançou
    }


    return 0;
}
