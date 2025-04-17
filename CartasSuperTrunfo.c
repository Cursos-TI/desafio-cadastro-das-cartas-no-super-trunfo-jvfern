#include <stdio.h>

int main() {
    char estado_a[50],estado_b[50],codigo_a[10],codigo_b[10],nome_1[50],nome_2[50];
    int pop_1,pop_2,tur_1,tur_2;
    float pib_1,pib_2,a_1,a_2;

    printf("Digite o estado: ");
    scanf("%s", &estado_a);

    printf("Digite o código: ");
    scanf("%s", &codigo_a);


    printf("Digite a cidade: ");
    scanf("%s", &nome_1);
    printf("Digite a população: ");
    scanf("%d", &pop_1);
    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &tur_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_1);
    printf("Digite a área: ");
    scanf("%f", &a_1);
    printf("\n");
    printf("Digite o estado: ");
    scanf("%s", &estado_b);
    printf("Digite o código: ");
    scanf("%s", &codigo_b);
    printf("Digite a cidade: ");
    scanf("%s", &nome_2);
    printf("Digite a população: ");
    scanf("%d", &pop_2);
    printf("Digite quantos pontos turísticos: ");
    scanf("%d", &tur_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_2);
    printf("Digite a área: ");
    scanf("%f", &a_2);
    printf("Estado: %s\n", estado_a);
    printf("Código: %s\n", codigo_a);
    printf("Nome da cidade: %s\n - População: %d\n", nome_1,pop_1);
    printf("Área: %.2f\n - Pontos turísticos: %d\n", pib_1,tur_1);
    printf("Estado: %s\n - Código: %s\n", estado_b, codigo_b);
    printf("Nome da cidade: %s\n - População: %d\n", nome_2,pop_2);
    printf("Área: %.2f\n - Pontos turísticos: %d\n", pib_2,tur_2);
return 0;
}
