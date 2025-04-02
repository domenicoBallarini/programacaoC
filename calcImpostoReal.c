
#include <stdio.h>

int main() {
    float preco_final, imposto_declarado, preco_original, valor_retido, aumento_total;

    // Solicita o preço final do produto
    printf("Digite o preco de prateleira: R$ ");
    scanf("%f", &preco_final);

    // Solicita a porcentagem de imposto declarado pelo governo
    printf("Digite a porcentagem de imposto que o governo diz que cobra (sem o sinal de %%): ");
    scanf("%f", &imposto_declarado);

    // Calcula o preço original
    preco_original = preco_final / (1 + imposto_declarado / 100);

    // Calcula o valor retido
    valor_retido = preco_final - preco_original;

    // Calcula o imposto real sobre o preço original
    imposto_declarado = (valor_retido / preco_original) * 100;

    // Calcula o aumento total do preço em relação ao original
    aumento_total = (preco_final / preco_original) * 100;

    // Exibe os resultados
    printf("\n--- Resultado ---\n");
    printf("Preco original (sem imposto): R$ %.2f\n", preco_original);
    printf("Preco final na prateleira: R$ %.2f\n", preco_final);
    printf("Valor retido pelo governo: R$ %.2f\n", valor_retido);
    printf("Imposto declarado pelo governo: %.2f%%\n", imposto_declarado);
    printf("Aumento total do preco em relacao ao original: %.2f%%\n", aumento_total);

    return 0;
}

