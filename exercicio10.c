#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float delta, x1, x2;

    // Solicite ao usuário que insira os coeficientes da equação
    printf("Digite o coeficiente a (diferente de zero): ");
    scanf("%f", &a);
    if (a == 0)
    {
        printf("Não é uma equação de segundo grau.\n");
        return 1; // Saia do programa com código de erro
    }
    printf("Digite o coeficiente b: ");
    scanf("%f", &b);
    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    // Calcule o discriminante (delta)
    delta = b * b - 4 * a * c;

    // Verifique os casos com base no valor de delta
    if (delta < 0)
    {
        printf("Não existe raiz.\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("Raiz única: x = %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raízes reais:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
}