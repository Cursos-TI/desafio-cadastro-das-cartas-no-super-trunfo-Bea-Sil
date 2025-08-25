#include <stdint.h>

int main () {
    // carta 1
char estado1;
char codigo1 [10];
char nome1 [50];
int populacao1;
float area1, pib1;
int pontosTuristicos1;
float densidadePopulacional1;
float pibPercapta1;


  // carta 2
char estado2;
char codigo2 [10];
char nome2 [50];
int populacao2;
float area2, pib2;
int pontosTuristicos2;
float densidadePopulacional2;
float pibPertcapta2;


printf("  Carta 1  ");
printf("Estado (A-H): ");
scanf("%c", &estado1);

printf("Código da carta (ex:A01): ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf("%c" nome1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (Km²): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);

float pibpercapta1 = pib1 / populacao1;
float densidadePopulacional1 =  populacao1 / area1;

printf("  Carta 2 ");
printf("Estado (A-H): ");
scanf("%c", &estado2);

printf("Códfigo da carta (ex:A01): ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf("%c", nome2);

printf("Pupulação: ");
scanf("%d", &populacao2);

printf("Área (Km²): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

float pibpercapta2 = pib2 / populacao2;
float densidadePopulacional2 =  populacao2 / area2;

 printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %2.f km² \n", area1);
printf("PIB: %2.f \n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade populacional: %.2f", divisao)
Printf("Pib Per Capita: %.2f", divisao);

printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %2.f km² \n", area2);
printf("PIB: %2.f \n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade populacional: %.2f", divisao)


return 0;
}
