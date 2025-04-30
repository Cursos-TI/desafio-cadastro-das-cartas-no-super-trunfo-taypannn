#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main() {

    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;


    printf("Digite os dados da primeira cidade:\n");
    
    printf("Populacao: ");

    scanf("d%", &populacao1);
    
    printf("PIB: ");
    
    scanf("%f", &pib1);
        
    printf("Area: ");
    
    scanf("%f", &area1);

    printf("Pontos Turísticos: ");
    
    scanf("%d", &pontos_turisticos1);


        

    //cadastro dos dados da segunda cidade


        

    printf("Digite os dados da segunda cidade:\n");
    
    printf("Populacao: ");

    scanf("d%", &populacao2);
    
    printf("PIB: ");
    
    scanf("%f", &pib2);
        
    printf("Area: ");
    
    scanf("%f", &area2);

    printf("Pontos Turísticos: ");
    
    scanf("%d", &pontos_turisticos2);   



     // Exibição dos dados cadastrados


     printf("\nDados cadrastrados:\n");
    
     printf("Cidade 1 - Populacao: %d, PIB: %.2f, Area: %.2f, Pontos Turísticos:%d\n", populacao1, pib1, area1, pontos_turisticos1);

     printf("Cidade 2 - Populacao: %d, PIB: %.2f, Area: %.2f, Pontos Turísticos:%d\n", populacao2, pib2, area2, pontos_turisticos2);


        



    
    
    

    





    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
