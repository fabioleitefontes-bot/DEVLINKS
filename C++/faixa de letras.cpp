#include <stdio.h>
#include <string.h>
#include <ctype.h>

// A funcao principal do programa
int main() {
    char linha[51]; // Buffer para ler a linha de entrada

    // Loop para ler cada caso de teste (cada linha)
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        // Remove o caractere de quebra de linha que o fgets adiciona
        linha[strcspn(linha, "\n")] = '\0';

        // Se a linha for vazia, apenas imprime uma nova linha e continua para o proximo caso
        if (strlen(linha) == 0) {
            printf("\n");
            continue;
        }

        // Vetor de 26 posicoes para marcar a presenca de cada letra (a-z)
        // Inicializa todas as posicoes com 0
        int letras_presentes[26] = {0};

        // Itera sobre a string de entrada para encontrar e marcar as letras unicas
        for (int i = 0; linha[i] != '\0'; i++) {
            char c = linha[i];
            // Verifica se o caractere e uma letra minuscula
            if (islower(c)) {
                // Marca a posicao correspondente a letra no vetor
                // Exemplo: 'a' - 'a' = 0, 'b' - 'a' = 1, etc.
                letras_presentes[c - 'a'] = 1;
            }
        }

        // Variavel para controlar se uma virgula e necessaria antes de imprimir
        int primeira_faixa = 1;

        // Itera sobre o vetor de presenca para encontrar as faixas
        for (int i = 0; i < 26; i++) {
            // Se a letra na posicao 'i' estiver presente (valor 1)
            if (letras_presentes[i] == 1) {
                // 'i' representa o comeco de uma faixa. Armazena a letra
                char inicio_faixa = 'a' + i;
                
                // Encontra o fim da faixa, verificando letras consecutivas
                int j = i;
                while (j + 1 < 26 && letras_presentes[j + 1] == 1) {
                    j++;
                }

                // A letra final da faixa e a letra na posicao 'j'
                char fim_faixa = 'a' + j;

                // Imprime a virgula e o espaco, se nao for a primeira faixa
                if (!primeira_faixa) {
                    printf(", ");
                }

                // Imprime a faixa no formato "inicio:fim"
                printf("%c:%c", inicio_faixa, fim_faixa);
                
                // Sinaliza que a primeira faixa ja foi impressa
                primeira_faixa = 0;

                // Move o indice do loop principal para a posicao final da faixa
                // para evitar re-processar as letras ja usadas
                i = j;
            }
        }
        
        // Imprime uma nova linha apos cada caso de teste
        printf("\n");
    }

    return 0; // Retorna 0 para indicar sucesso
}
