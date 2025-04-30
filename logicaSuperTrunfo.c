#include <stdio.h>

int main() {
    int população, população2, pontosturisticos, pontosturisticos2, escolhaCarta, escolhaAtributo, escolhaAtributo2, resultado, resultado2;
    char estado[50] = "Ceará", estado2[50] = "Bahia", codigo[5] = "C01", codigo2[5] = "B01", cidade[50] = "Fortaleza", cidade2[50] = "Salvador";
    float area, area2, PIB, PIB2, densidadep, densidadep2, PIBpc, PIBpc2, superPoder, superPoder2;

    //Primeira Carta
    população = 2428678;
    area = 312353;
    PIB = 7300000000;
    pontosturisticos = 13;
    
    //Segunda Carta
    população2 = 3957123;
    area2 = 693442;
    PIB2 = 6200000000;
    pontosturisticos2 = 10;

    //Calculos de Atributos
    densidadep = população / area;
    densidadep2 = população2 / area2;

    PIBpc = PIB / população;
    PIBpc2 = PIB2 / população2;

    superPoder = população + area + PIB + PIBpc + pontosturisticos + (1 / densidadep);
    superPoder2 = população2 + area2 + PIB2 + PIBpc2 + pontosturisticos2 + (1 / densidadep2);

    //Menu do Jogo
    printf("Escolha qual sua carta\n");
    printf("1.");
    printf("%s\n", estado);
    printf("2.");
    printf("%s\n", estado2);
    scanf("%d", &escolhaCarta);

    switch (escolhaCarta)
    {
case 1:
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Área em km²: %.2f\n", area);
    printf("População: %d\n", população);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %f\n", densidadep);
    printf("PIB per capita: %f\n", PIBpc);
    printf("Super Poder: %.2f\n", superPoder);

    //Escolha de Atributos
    printf("###Escolha o primeiro atributo que você quer comparar!###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
    case 1:
        resultado = população > população2 ? 1 : 0;
        break;
    case 2:
        resultado = area > area2 ? 1 : 0;
        break;
    case 3:
        resultado = PIB > PIB2 ? 1 : 0;
        break;
    case 4:
        resultado = pontosturisticos2 > pontosturisticos2 ? 1 : 0;
        break;
    case 5:
        resultado = densidadep < densidadep2 ? 1 : 0;
        break;  
    default:
        printf("Opção invalida!");
        break;
    }

    printf("###Escolha o segundo atributo que você quer comparar!###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhaAtributo2);


    if (escolhaAtributo == escolhaAtributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    }else{
        switch (escolhaAtributo2)
        {
        case 1:
            resultado2 = população > população2 ? 1 : 0;
            break;
        case 2:
            resultado2 = area > area2 ? 1 : 0;
            break;
        case 3:
            resultado2 = PIB > PIB2 ? 1 : 0;
            break;
        case 4:
            resultado2 = pontosturisticos > pontosturisticos2 ? 1 : 0;
            break;
        case 5:
            resultado2 = densidadep < densidadep2 ? 1 : 0;
            break;  
        default:
            printf("Opção invalida!");
            break;
        }}
    if (resultado && resultado2)
    {
        printf("Parabéns, você venceu!");
    }else if (resultado != resultado2){
        printf("Empate!");
    }else{
        printf("Você perdeu!");
    }
    break;

case 2:
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Área em km²: %.2f\n", area2);
    printf("População: %d\n", população2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidadep2);
    printf("PIB per capita: %f\n", PIBpc2);
    printf("Super Poder: %.2f\n", superPoder2);

    //Escolha de Atributos
    printf("###Escolha o primeiro atributo que você quer comparar!###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhaAtributo);

    switch (escolhaAtributo)
    {
    case 1:
        resultado = população2 > população ? 1 : 0;
        break;
    case 2:
        resultado = area2 > area ? 1 : 0;
        break;
    case 3:
        resultado = PIB2 > PIB ? 1 : 0;
        break;
    case 4:
        resultado = pontosturisticos2 > pontosturisticos ? 1 : 0;
        break;
    case 5:
        resultado = densidadep2 < densidadep ? 1 : 0;
        break;  
    default:
        printf("Opção invalida!");
        break;
    }

    printf("###Escolha o segundo atributo que você quer comparar!###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    scanf("%d", &escolhaAtributo2);


    if (escolhaAtributo == escolhaAtributo2)
    {
        printf("Você escolheu o mesmo atributo!");
    }else{
        switch (escolhaAtributo2)
        {
        case 1:
            resultado2 = população2 > população ? 1 : 0;
            break;
        case 2:
            resultado2 = area2 > area ? 1 : 0;
            break;
        case 3:
            resultado2 = PIB2 > PIB ? 1 : 0;
            break;
        case 4:
            resultado2 = pontosturisticos2 > pontosturisticos ? 1 : 0;
            break;
        case 5:
            resultado2 = densidadep2 < densidadep ? 1 : 0;
            break;  
        default:
            printf("Opção invalida!");
            break;
        }}

    if (resultado && resultado2)
    {
        printf("Parabéns, você venceu!");
    }else if (resultado != resultado2){
        printf("Empate!");
    }else{
        printf("Você perdeu!");
    }
break;
    }

}