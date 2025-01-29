#include <stdio.h>

int main(){
float  populacao, pib, area;
char cidade [50], codigo[10], pais[50];

printf("Digite a cidade: \n");
scanf("%s", &cidade);

printf("Digite Código: \n");
scanf("%s", &codigo);

printf("Digite País: \n");
scanf("%s", &pais);

printf("Digite área em km2: \n");
scanf("%f", &area);

printf("Digite População 'm': \n");
scanf("%f", &populacao);

printf("Digite o PIB 'bi U$$': \n");
scanf("%f", &pib);

printf("Cidade: %s \n", cidade);
printf("Código: %s \n", codigo);
printf("País: %s \n", pais);
printf("Área em km2: %f \n", area);
printf("População'm': %f \n", populacao);
printf("PIB 'bi U$$': %f \n", pib);


return 0;
}
