#include <stdio.h>
#include <string.h>

// Estrutura para representar uma cidade
struct Cidade {
    char nome[50];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cidade1.nome);
    printf("População: ");
    scanf("%d", &cidade1.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    printf("Nome: ");
    scanf(" %[^\n]", cidade2.nome);
    printf("População: ");
    scanf("%d", &cidade2.populacao);
    printf("Área (km²): ");
    scanf("%f", &cidade2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparações
    printf("\nComparação entre as cidades:\n");

    if (cidade1.populacao > cidade2.populacao)
        printf("Maior população: %s\n", cidade1.nome);
    else if (cidade1.populacao < cidade2.populacao)
        printf("Maior população: %s\n", cidade2.nome);
    else
        printf("População: Empate\n");

    if (cidade1.area > cidade2.area)
        printf("Maior área: %s\n", cidade1.nome);
    else if (cidade1.area < cidade2.area)
        printf("Maior área: %s\n", cidade2.nome);
    else
        printf("Área: Empate\n");

    if (cidade1.pib > cidade2.pib)
        printf("Maior PIB: %s\n", cidade1.nome);
    else if (cidade1.pib < cidade2.pib)
        printf("Maior PIB: %s\n", cidade2.nome);
    else
        printf("PIB: Empate\n");

    return 0;
}
