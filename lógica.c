#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "historia.h"
#include "interface.h"
#include "logica.h"

#define MAX_TENTATIVAS 5

int main() {

    int jogar_novamente;

    srand(time(NULL));

    do {

        int numero_secreto = gerar_numero_secreto();
        int tentativa;
        int acertou = 0;

        exibir_introducao();

        printf("Voce tem %d tentativas para resolver o misterio.\n\n",
               MAX_TENTATIVAS);

        exibir_pistas(numero_secreto);

        for (tentativa = 1;
             tentativa <= MAX_TENTATIVAS;
             tentativa++) {

            int palpite = ler_e_validar_palpite();

            int resultado =
                verificar_palpite(numero_secreto, palpite);

            if (resultado == 0) {

                exibir_vitoria();

                printf("Voce acertou em %d tentativa(s).\n",
                       tentativa);

                acertou = 1;
                break;
            }

            exibir_mensagem_tentativa(
                tentativa,
                resultado
            );

            printf("Tentativas restantes: %d\n",
                   MAX_TENTATIVAS - tentativa);
        }

        if (!acertou) {

            exibir_derrota();

            printf("O numero secreto era: %d\n",
                   numero_secreto);
        }

        jogar_novamente =
            quer_jogar_novamente();

    } while (jogar_novamente);

    printf("\nObrigado por jogar!\n");

    return 0;
}
