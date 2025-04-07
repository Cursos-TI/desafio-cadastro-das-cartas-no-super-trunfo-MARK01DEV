#include <stdio.h>

int main()
{
    char estado[50], estado2[50], carta[50], carta2[50], cidade[50], cidade2[50], Superpoder[50], Superpoder2[50];
    int populacao, populacao2, pontos_turisticos, pontos_turisticos2;
    float pib, pib2, area, area2, resultadopop, resultadopop2, resultadopib, resultadopib2;

    printf("*** Seja bem vindo ***\n");

    printf("*** Vamos para a carta 1 *** \n");
    printf("Digite o estado: ");
    scanf("%s", estado);
    printf("Digite o nome da carta: ");
    scanf("%s", carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área em km2: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Digite o Superpoder da sua carta: ");
    scanf("%s", Superpoder);

    printf("*** Vamos para a carta 2 *** \n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite o nome da carta: ");
    scanf("%s", carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("Digite o Superpoder da sua carta: ");
    scanf("%s", Superpoder2);

    resultadopop = (double)populacao / (double)area;
    resultadopib = (double)pib / (double)populacao;
    resultadopop2 = (double)populacao2 / (double)area2;
    resultadopib2 = (double)pib2 / (double)populacao2;    

    //////////////////////////////////////////////////////////////////////////////////////////
    //// TITULO 1
    //////////////////////////////////////////////////////////////////////////////////////////
    printf("Resultado Carta 1\n");
    //////////////////////////////////////////////////////////////////////////////////////////
    //// CARTA 1
    //////////////////////////////////////////////////////////////////////////////////////////
    printf("\tEstado: %s\n", estado);
    printf("\tCarta: %s\n", carta);
    printf("\tCidade: %s\n", cidade);
    printf("\tPopulação: %d\n", populacao);
    printf("\tÁrea em km2: %.2f\n", area);
    printf("\tPIB: %.2f\n", pib);
    printf("\tNúmero de pontos turísticos: %d\n", pontos_turisticos);
    printf("\tResultado da população por km2: %.2f\n", resultadopop);
    printf("\tResultado do PIB por população: %.2f\n", resultadopib);
    //////////////////////////////////////////////////////////////////////////////////////////
    //// TITULO 2
    //////////////////////////////////////////////////////////////////////////////////////////
    printf("Resultado Carta 2\n");
    //////////////////////////////////////////////////////////////////////////////////////////
    //// CARTA 2
    //////////////////////////////////////////////////////////////////////////////////////////
    printf("\tEstado: %s\n", estado2);
    printf("\tCarta: %s\n", carta2);
    printf("\tCidade: %s\n", cidade2);
    printf("\tPopulação: %d\n", populacao2);
    printf("\tÁrea em km2: %.2f\n", area2);
    printf("\tPIB: %.2f\n", pib2);
    printf("\tNúmero de pontos turísticos: %d\n", pontos_turisticos2);
    printf("\tResultado da população por km2: %.2f\n", resultadopop2);
    printf("\tResultado do PIB por população: %.2f\n", resultadopib2);
    //////////////////////////////////////////////////////////////////////////////////////////
    int escolha;
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        if (populacao > populacao2)
            printf("Carta 1 venceu!\n");
        else if (populacao < populacao2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;
    case 2:
        if (area > area2)
            printf("Carta 1 venceu!\n");
        else if (area < area2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;
    case 3:
        if (pib > pib2)
            printf("Carta 1 venceu!\n");
        else if (pib < pib2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;
    case 4:
        if (pontos_turisticos > pontos_turisticos2)
            printf("Carta 1 venceu!\n");
        else if (pontos_turisticos < pontos_turisticos2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;
    case 5:
        if (resultadopop < resultadopop2)
            printf("Carta 1 venceu!\n");
        else if (resultadopop > resultadopop2)
            printf("Carta 2 venceu!\n");
        else
            printf("Empate!\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
