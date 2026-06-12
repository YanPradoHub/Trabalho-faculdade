#ifndef INTERFACE_H
#define INTERFACE_H

int ler_e_validar_palpite();
int quer_jogar_novamente();

#endif

#include <stdio.h>
#include "interface.h"

int ler_e_validar_palpite() {
    int palpite;
    do {
        printf("Digite seu palpite (entre 1 e 50): ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 50) {
            printf("Valor invalido! Por favor, digite um numero entre 1 e 50.\n");
        }
    } while (palpite < 1 || palpite > 50);

    return palpite;
}

int quer_jogar_novamente() {
    char resposta;
    printf("\nDeseja jogar novamente? (s/n): ");
    scanf(" %c", &resposta); // O espaço antes de %c limpa o buffer do teclado

    if (resposta == 's' || resposta == 'S') {
        return 1;
    } else {
        return 0;
    }
}
