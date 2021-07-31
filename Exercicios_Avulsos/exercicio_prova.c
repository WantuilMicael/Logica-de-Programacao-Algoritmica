#include <stdio.h>

int main()
{
    float altura[5], menor_altura, maior_altura;
    int i=0;

    for(i=0; i<5; i++){
        printf("Digite uma Altura \n");
        scanf("%f",&altura[i]);
    }

    menor_altura=altura[0];
    maior_altura=altura[0];

    for (i=0; i<5; i++){

        if(altura[i]<menor_altura){
            menor_altura=altura[i];
        }

        if(altura[i]>maior_altura){
            maior_altura=altura[i];
        }

        printf("\n Altura [%d] %.2f\n",i,altura[i]);

    }

    printf("\n Maior Altura = %.2f\n",maior_altura);
    printf("\n Menor Altura = %.2f\n",menor_altura);

    return 0;
}
