#include <stdio.h>

int main() {

char estado1;
char codigo1 [10];
char nome1 [50];
int populacao1;
float area1, pib1;
int pontosTuristicos1;
float densidade_populacional;
float pib_per_capta;

char estado2;
char codigo2 [10];
char nome2 [50];
int populacao2;
float area2, pib2;
int pontosTuristicos2;
float densidade_populacional2;
float pib_per_capta2;

printf("\n=== Carta 1 ===\n");

printf("Estado (A-H): ");
scanf("%c", &estado1);

printf("Código da carta (ex:A01): ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf(" %[^\n]",nome1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (Km²): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);

pib_per_capta = pib1 / populacao1;
densidade_populacional = area1 / populacao1;


printf("\n === Carta 2 ===\n");

printf("Estado (A-H): ");
scanf("%c", &estado2);

printf("Códfigo da carta (ex:A01): ");
scanf("%[^\n]", codigo2);

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

pib_per_capta2 = pib2 / populacao2;
densidade_populacional2 = area2 / populacao2;

printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", nome1);
printf("População: %d\n", populacao1);
printf("Área: %2.f km² \n", area1);
printf("PIB: %2.f \n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Pupulacional: %.2f\n", densidade_populacional);
printf("PIB per Capita: %.2f reais \n", pib_per_capta);

printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", nome2);
printf("População: %d\n", populacao2);
printf("Área: %2.f km² \n", area2);
printf("PIB: %2.f \n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f\n", densidade_populacional2);
printf("PIB per Capta: %.2f reais \n", pib_per_capta2);

}
