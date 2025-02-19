// TP 01 - Engenharia de Software III
// Aluno: Dhara Simic
// Colaboração de: Laisa Rodrigues e Gustavo Freitas

#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    int soma, media;

    printf("Bem-vindo(a) a calculadora C, espero que se divirta e aproveite cada calculo!");

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);
    printf("Digite o quinto numero: ");
    scanf("%d", &n5);
    printf("Digite o sexto numero: ");
    scanf("%d", &n6);
    printf("Digite o setimo numero: ");
    scanf("%d", &n7);
    printf("Digite o oitavo numero: ");
    scanf("%d", &n8);
    printf("Digite o nono numero: ");
    scanf("%d", &n9);
    printf("Digite o decimo numero: ");
    scanf("%d", &n10);

    soma = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;
    media = soma / 10;

    printf("A soma dos numero e: %d\n", soma);
    printf("A média dos numero e: %d\n", media);

    return 0;
}