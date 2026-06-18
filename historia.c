#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINIMO 1
#define MAXIMO 50
#define MAX_TENTATIVAS 5

void exibir_introducao() {
    printf("========================================\n");
    printf("      O MISTERIO DO NUMERO PERDIDO      \n");
    printf("========================================\n");
    printf("Um antigo guardiao escondeu um numero.\n");
    printf("Sua missao e descobrir qual e esse numero\n");
    printf("antes que suas tentativas acabem.\n\n");
}

void exibir_mensagem_tentativa(int tentativa, int resultado) {
    printf("\nTentativa %d:\n", tentativa);

    if (resultado == -1) {
        printf("A voz misteriosa sussurra: 'Tente um numero maior...'\n");
    }
    else if (resultado == 1) {
        printf("As sombras alertam: 'O numero procurado e menor...'\n");
    }
}

void exibir_vitoria() {
    printf("\n========================================\n");
    printf("            PARABENS!                   \n");
    printf("========================================\n");
    printf("Voce encontrou o numero secreto e\n");
    printf("desvendou o misterio com sucesso!\n");
}

void exibir_derrota() {
    printf("\n========================================\n");
    printf("            FIM DE JOGO                 \n");
    printf("========================================\n");
    printf("As tentativas acabaram e o segredo\n");
    printf("permaneceu escondido.\n");
}
