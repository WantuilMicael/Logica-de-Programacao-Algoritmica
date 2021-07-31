#include<stdio.h>
#include<stdlib.h>

int main()

{
    float notap1, notap2, total, media;
    int peso1, peso2, totalp;
    char nome[10];

    printf("Escreva o nome do Aluno: ");
    scanf("%s", &nome);

    printf("Digite a nota da P1: ");
    scanf("%f",&notap1);

    printf("Digite a nota da P2: ");
    scanf("%f",&notap2);

    printf("Digite o peso da P1: ");
    scanf("%d", &peso1);

    printf("Digite o peso da P2: ");
    scanf("%d", &peso2);

    total = (notap1*peso1)+(notap2*peso2);

    totalp = peso1+peso2;

    media = total/totalp;

    printf("Nome: %s\n", nome);

    printf("O total do Aluno foi de: %.1f\n", total);

    printf("A media foi de: %.1f\n", media);

    if (media >= 6)
        printf("Aluno Aprovado!\n");
    else
        printf("Aluno Reprovado!\n");

    system("pause");

    return 0;
}
