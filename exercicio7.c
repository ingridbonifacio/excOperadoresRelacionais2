#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Solicita ao usuário que digite as notas das três provas
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Calcula a média ponderada
    media = (nota1 + nota2 + (nota3 * 2)) / 4.0;

    // Verifica se o aluno foi aprovado ou reprovado
    if (media >= 7.0) {
        printf("Média: %.2f\n", media);
        printf("Aluno Aprovado!\n");
    } else {
        printf("Média: %.2f\n", media);
        printf("Aluno Reprovado!\n");
    }
}