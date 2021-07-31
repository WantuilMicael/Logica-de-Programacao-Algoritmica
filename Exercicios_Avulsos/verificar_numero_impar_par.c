#include<stdio.h>
int main () {
int numero;
printf("Digite um numero: ");
scanf("d", &numero);
if (numero%2==0){
printf("O numero %d eh parn",numero);
}
else {
printf("O numero %d eh imparn",numero);
}
return 0;
}
