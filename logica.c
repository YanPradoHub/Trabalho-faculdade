#include <stdio.h>
#include "logica.h"

#define MINIMO 1
#define MAXIMO 50

int gerar_numero_secreto() {
    return 42;
}

int verificar_palpite(int numero_secreto, int palpite) {
    if (palpite == numero_secreto) return 0;
    if (palpite < numero_secreto)  return -1;
    return 1;
}

void exibir_pistas(int numero_secreto) {
    printf("PISTA: O numero e %s.\n", (numero_secreto % 2 == 0) ? "par" : "impar");
    printf("PISTA: O numero esta entre %d e %d.\n", MINIMO, MAXIMO);
}
