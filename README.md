## 🏆 Implementação Final - Nível Mestre

Nesta etapa final, o projeto foi elevado ao nível avançado, focando em **otimização de memória**, **precisão de dados** e **lógica de duelo**.

### 🛠️ Melhorias Técnicas
- **Modificadores de Tipo:** Implementação de `unsigned long int` para a população, garantindo suporte a grandes metrópoles sem risco de *overflow*.
- **Precisão Matemática:** Uso de `float` para PIB e Área, permitindo cálculos detalhados de densidade e PIB per capita.
- **Lógica de Comparação:** Criação de um sistema de duelo que utiliza operadores relacionais para definir a carta vencedora.

### 🃏 Regras do Duelo
O sistema compara automaticamente as duas cartas inseridas nos seguintes critérios:
1. **População, Área, PIB, Pontos Turísticos e PIB per Capita:** Vence a carta com o **maior** valor.
2. **Densidade Populacional:** Seguindo a lógica de estratégia, vence a carta com o **menor** valor (cidade menos adensada).

### 💻 Aprendizados Relevantes
Durante o desenvolvimento, explorei soluções para leitura de strings compostas com `scanf(" %[^\n]", ...)` e a utilização de **operadores ternários** para tornar a exibição dos resultados mais limpa e intuitiva.
