#include <stdio.h>

int main()
{

    char estado, estado2;                   // como informado na video-aula, as variaveis dos mesmo tipo podem ser declaradas na mesma linha, separadas por vírgula
    char codigo_carta[4], codigo_carta2[4]; // distinguindo as variaveis das duas cartas com "2" no final
    char nome_cidade[50], nome_cidade2[50];
    unsigned long int  populacao, populacao2; // "unsigned long" é usado para valores altos e sempre positivos
    unsigned int nu_pontos_turisticos, nu_pontos_turisticos2;//"unsigned int" nunca será negativo
    float area, area2;
    float densidade_populacional, densidade_populacional2;
    float pib, pib2, pib_per_capita, pib_per_capita2;

    printf("\n\nOlá! Bem-vindo ao Super Trunfo!\n\n"); // Textinho para iniciar o jogo

    // CARTA 1
    printf("Qual o estado (A-H)?\n");
    scanf(" %c", &estado); // Encontrei problema com github... estava apresentando um erro de "expected expression before 'char'", mas era só um erro de formatação do código, o espaço antes de %c foi essencial para evitar problemas com caracteres de nova linha

    printf("Qual o codigo (01 a 04)?\n");
    scanf(" %s", codigo_carta); // Como apresentado na materia, string não precisa de "&" no scanf

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome_cidade); // Como mencionado na aula, fui atrás de opções para resolver o problema caso o usuario informe um nome composto, e achei o "[^\n]", que lê até encontrar uma nova linha, permitindo assim a entrada de nomes de cidades com mais de uma palavra. Nesse caso, aprendi também que, quando usei "[]" eu substitui o "s (string)", pois se eu o colocase, seria duas informações conflitantes, o que geraria confusão..

    printf("Qual a Populacao?\n");
    scanf("%lu", &populacao);

    printf("Qual a Área?\n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade (em bilhões de reais)?\n");
    scanf("%f", &pib);

    printf("Quantos Pontos Turisticos?\n");
    scanf("%u", &nu_pontos_turisticos);

    // CARTA 2
    printf("\nDados da segunda carta:\n");

    printf("Qual o estado (A-H)?\n");
    scanf(" %c", &estado2);

    printf("Qual o codigo (01 a 04)?\n");
    scanf(" %s", codigo_carta2);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Qual a Populacao?\n");
    scanf("%lu", &populacao2);

    printf("Qual a Área?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade (em bilhões de reais)?\n");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turisticos?\n");
    scanf("%u", &nu_pontos_turisticos2);

    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita = (float)(pib * 1000000000.0) / populacao;// multiplquei o PIB por 1b pois como eu estou pedindo para o usuario informar o valor em B, quando divido esse valor pela pulação, da um valo extremamente baixo, multiplicando por 1B eu deuxo o valor real.
    pib_per_capita2 = (float)(pib2 * 1000000000.0) / populacao2;

    // EXIBIÇÃO
    printf("\n--- CARTA 1 ---\n"); //
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo_carta); // Concatenação visual
    printf("Cidade: %s\n", nome_cidade);
    printf("Populacao: %lu\n", populacao);
    printf("Área: %.2f M²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %u\n", nu_pontos_turisticos);
    printf("A densidade populacional de sua cidade é: %.2f hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo_carta2); // Concatenação visual, seguindo o mesmo formato da primeira carta
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Área: %.2f M²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %u\n", nu_pontos_turisticos2);
    printf("A densidade populacional da sua cidade é: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


    int resultado_populacao = (populacao > populacao2) ? 1 : 2;
    int resultado_area = (area > area2) ? 1 : 2;
    int resultado_pib = (pib > pib2) ? 1 : 2;
    int resultado_nu_pon_tur = (nu_pontos_turisticos > nu_pontos_turisticos2) ? 1 : 2;
    int resultado_densidade = (densidade_populacional < densidade_populacional2) ? 1 : 2;
    int resultado_pib_per_capita = (pib_per_capita > pib_per_capita2) ? 1 : 2;



    printf("\n***RESULTADO DO DUELO***\n");
    printf("População: Carta %d venceu\n", (populacao > populacao2) ? 1 : 2);
    printf("Area: Carta %d venceu\n", (area > area2) ? 1 : 2);
    printf("PIB: Carta %d venceu\n", (pib > pib2) ? 1 : 2);
    printf("Ponto Turisticos: Carta %d venceu\n", (nu_pontos_turisticos > nu_pontos_turisticos2) ? 1 : 2);
    printf("Densidade: Carta %d venceu\n", (densidade_populacional < densidade_populacional2) ? 1 : 2); 
    printf("PIB Per Capita: Carta %d venceu\n", (pib_per_capita > pib_per_capita2) ? 1 : 2);

    
    printf("\n--- POPULAÇÃO ---\n");
    printf("Carta 1: %lu | Carta 2: %lu\n", populacao, populacao2);
    printf("Vencedor: Carta %d\n", resultado_populacao);

    printf("\n--- AREA ---\n");
    printf("Carta 1: %.2f | Carta 2: %.2f\n", area, area2); 
    printf("Vencedor: Carta %d\n", resultado_area);

    printf("\n--- PIB ---\n");
    printf("Carta 1: %.2f | Carta 2: %.2f\n", pib, pib2); 
    printf("Vencedor: Carta %d\n", resultado_pib);

    printf("\n--- PONTOS TURISTICOS ---\n");
    printf("Carta 1: %u | Carta 2: %u\n", nu_pontos_turisticos, nu_pontos_turisticos2); 
    printf("Vencedor: Carta %d\n", resultado_nu_pon_tur);

    printf("\n--- DENSIDADE ---\n");
    printf("Carta 1: %.2f | Carta 2: %.2f\n", densidade_populacional, densidade_populacional2); 
    printf("Vencedor: Carta %d\n", resultado_densidade);

    printf("\n--- PIB PER CAPITA ---\n");
    printf("Carta 1: %.2f | Carta 2: %.2f\n", pib_per_capita, pib_per_capita2); 
    printf("Vencedor: Carta %d\n", resultado_pib_per_capita);

    return 0;
}