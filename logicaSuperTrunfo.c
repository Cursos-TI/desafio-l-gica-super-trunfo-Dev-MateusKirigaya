#include <stdio.h>

// Defina aqui o atributo a ser comparado:
// 1 = População
// 2 = Área
// 3 = PIB
// 4 = Densidade Populacional (menor vence)
// 5 = PIB per Capita
#define ATRIBUTO_COMPARAR 5

int main() {
    // --- Carta 1 (pré-definida) ---
    char estado1[] = "SP";
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    unsigned long int populacao1 = 12325000; // população
    float area1 = 1521.11f;                  // km²
    float pib1 = 699.28f;                    // em bilhões de reais
    int pontosTuristicos1 = 50;

    // Cálculos da Carta 1
    float densidade1 = (float)populacao1 / area1; // habitantes por km²
    float pibPerCapita1 = (pib1 * 1e9f) / (float)populacao1; // reais por pessoa

    // --- Carta 2 (pré-definida) ---
    char estado2[] = "RJ";
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f;
    int pontosTuristicos2 = 30;

    // Cálculos da Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1e9f) / (float)populacao2;

    // --- Mostrar os dados básicos (opcional, para contexto) ---
    printf("Carta 1 - %s (%s):\n", nomeCidade1, estado1);
    printf("  População: %lu\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("  PIB per Capita: %.2f reais\n\n", pibPerCapita1);

    printf("Carta 2 - %s (%s):\n", nomeCidade2, estado2);
    printf("  População: %lu\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("  PIB per Capita: %.2f reais\n\n", pibPerCapita2);

    // --- Comparação do atributo escolhido ---
    printf("Comparação de cartas (Atributo: ");
    if (ATRIBUTO_COMPARAR == 1) {
        printf("População):\n\n");
        if (populacao1 > populacao2) {
            printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (populacao2 > populacao1) {
            printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Ambas as cartas têm população igual: %lu\n", populacao1);
            printf("Resultado: Empate!\n");
        }
    } else if (ATRIBUTO_COMPARAR == 2) {
        printf("Área):\n\n");
        if (area1 > area2) {
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (area2 > area1) {
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Ambas as cartas têm área igual: %.2f km²\n", area1);
            printf("Resultado: Empate!\n");
        }
    } else if (ATRIBUTO_COMPARAR == 3) {
        printf("PIB):\n\n");
        if (pib1 > pib2) {
            printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pib2 > pib1) {
            printf("Carta 1 - %s (%s): %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões\n", nomeCidade2, estado2, pib2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Ambas as cartas têm PIB igual: %.2f bilhões\n", pib1);
            printf("Resultado: Empate!\n");
        }
    } else if (ATRIBUTO_COMPARAR == 4) {
        printf("Densidade Populacional):\n\n");
        // menor vence
        if (densidade1 < densidade2) {
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (densidade2 < densidade1) {
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidade2, estado2, densidade2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Ambas as cartas têm densidade igual: %.2f hab/km²\n", densidade1);
            printf("Resultado: Empate!\n");
        }
    } else if (ATRIBUTO_COMPARAR == 5) {
        printf("PIB per Capita):\n\n");
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else if (pibPerCapita2 > pibPerCapita1) {
            printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        } else {
            printf("Ambas as cartas têm PIB per capita igual: %.2f reais\n", pibPerCapita1);
            printf("Resultado: Empate!\n");
        }
    } else {
        printf("Atributo inválido definido para comparação.\n");
    }

    return 0;
}
