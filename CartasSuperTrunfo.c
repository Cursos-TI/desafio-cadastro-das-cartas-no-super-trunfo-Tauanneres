#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar os atributos da cidade
    int codigo;
    char nome[50];
    long int populacao;
    float area;
    double pib;
    int pontosTuristicos;

    // Cadastro das Cartas (entrada de dados)
    printf("Cadastro de Carta - Cidade\n");
    
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Lê uma string com espaços

    printf("Digite a população da cidade: ");
    scanf("%ld", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%lf", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibição dos Dados Cadastrados
    printf("\n==== Dados da Cidade ====\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}