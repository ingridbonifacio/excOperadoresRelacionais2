#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que digite um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par
    if (numero % 2 == 0) {
        printf("O número digitado é par.\n");
    }
}