
    #include <stdio.h>

int main(){
    
    char estado, estado2;   // como informado na video-aula, as variaveis dos mesmo tipo podem ser declaradas na mesma linha, separadas por vírgula
    char codigo_carta[4], codigo_carta2[4];// distinguindo as variaveis das duas cartas com "2" no final
    char nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2, nu_pontos_turisticos, nu_pontos_turisticos2;
    float area, area2, pib, pib2;

    printf("\n\nOlá! Bem-vindo ao Super Trunfo!\n\n");      // Textinho para iniciar o jogo

    // CARTA 1
    printf("Qual o estado (A-H)?\n");
    scanf(" %c", &estado); //Encontrei problema com github... estava apresentando um erro de "expected expression before 'char'", mas era só um erro de formatação do código, o espaço antes de %c foi essencial para evitar problemas com caracteres de nova linha

    printf("Qual o codigo (01 a 04)?\n");
    scanf(" %s", codigo_carta); //Como apresentado na materia, string não precisa de "&" no scanf

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome_cidade); // Como mencionado na aula, fui atrás de opções para resolver o problema caso o usuario informe um nome composto, e achei o "[^\n]", que lê até encontrar uma nova linha, permitindo assim a entrada de nomes de cidades com mais de uma palavra. Nesse caso, aprendi também que, quando usei "[]" eu substitui o "s (string)", pois se eu o colocase, seria duas informações conflitantes, o que geraria confusão..

    printf("Qual a Populacao?\n");
    scanf("%d", &populacao);

    printf("Qual a Área?\n");
    scanf("%f", &area);

    printf("Qual o PIB da sua cidade (em bilhões de reais)?\n");
    scanf("%f", &pib);

    printf("Quantos Pontos Turisticos?\n");
    scanf("%d", &nu_pontos_turisticos);

    // CARTA 2
    printf("\nDados da segunda carta:\n");

    printf("Qual o estado (A-H)?\n");
    scanf(" %c", &estado2);

    printf("Qual o codigo (01 a 04)?\n");
    scanf(" %s", codigo_carta2);

    printf("Qual o nome da cidade?\n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Qual a Populacao?\n");
    scanf("%d", &populacao2);

    printf("Qual a Área?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade (em bilhões de reais)?\n");
    scanf("%f", &pib2);

    printf("Quantos Pontos Turisticos?\n");
    scanf("%d", &nu_pontos_turisticos2);

    // EXIBIÇÃO
    printf("\n--- CARTA 1 ---\n");//
    printf("Estado: %c\n", estado);
    printf("Codigo: %c%s\n", estado, codigo_carta); // Concatenação visual
    printf("Cidade: %s\n", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Área: %.2f M²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", nu_pontos_turisticos);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo_carta2); // Concatenação visual, seguindo o mesmo formato da primeira carta
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Área: %.2f M²\n", area2); 
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", nu_pontos_turisticos2);

    return 0;
}


