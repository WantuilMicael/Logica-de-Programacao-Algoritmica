#include <stdio.h>

int main()

{
    float alt[100], menor_altura, maior_altura;
    int i=0;

    for(i=0; i<100; i++){
        printf("Altura \n");
        scanf("%f", &alt[i]);
    }

    menor_altura=alt[0];
    maior_altura=alt[0];

    for(i=0; i<100; i++){
        if(alt[i]<menor_altura){
            menor_altura = alt[i];
        }

        if(alt[i]>maior_altura){
            maior_altura = alt[i];
        }

    printf("\n Altura ~%d %.2f\n", maior_altura);

    }

    printf("\n Pessoa mais Alta: %.2f\n", maior_altura);
    printf("\n Pessoa mais Baixa: %.2f\n", menor_altura);

    return 0;
}

