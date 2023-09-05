#include <stdio.h>

int main() {
    float salario_atual, salario_reajustado;
    int tempo_servico;

    // Solicite ao usuário que insira o salário atual e o tempo de serviço
    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salario_atual);
    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &tempo_servico);

    // Verifique o aumento com base no salário e no tempo de serviço
    if (salario_atual <= 500) {
        salario_reajustado = salario_atual * 0.25;
    } else if (salario_atual <= 1000) {
        salario_reajustado = salario_atual * 0.2;
    } else if (salario_atual <= 1500) {
        salario_reajustado = salario_atual * 0.15;
    } else if (salario_atual <= 2000) {
        salario_reajustado = salario_atual * 0.1;
    }

    // Verifique o bônus com base no tempo de serviço
    if (tempo_servico <= 3) {
        salario_reajustado += 100;
    } else if (tempo_servico <= 6) {
        salario_reajustado += 200;
    }

    // Imprima o salário reajustado
    printf("O salário reajustado do funcionário é: R$ %.2f\n", salario_reajustado);

}