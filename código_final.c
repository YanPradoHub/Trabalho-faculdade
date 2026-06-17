#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MINIMO 1
#define MAXIMO 50
#define MAX_TENTATIVAS 5

/* HISTORIA - Raynara */

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

/* INTERFACE - Mayara */

int ler_e_validar_palpite() {
int palpite;


do {
    printf("Digite seu palpite (entre 1 e 50): ");
    scanf("%d", &palpite);

    if (palpite < MINIMO || palpite > MAXIMO) {
        printf("Valor invalido! Digite um numero entre 1 e 50.\n");
    }

} while (palpite < MINIMO || palpite > MAXIMO);

return palpite;


}

int quer_jogar_novamente() {
char resposta;


printf("\nDeseja jogar novamente? (s/n): ");
scanf(" %c", &resposta);

if (resposta == 's' || resposta == 'S')
    return 1;

return 0;


}

/* LOGICA - Yan */

int gerar_numero_secreto() {
return (rand() % MAXIMO) + MINIMO;
}

int verificar_palpite(int numero_secreto, int palpite) {


if (palpite == numero_secreto)
    return 0;

if (palpite < numero_secreto)
    return -1;

return 1;


}

void exibir_pistas(int numero_secreto) {


if (numero_secreto % 2 == 0)
    printf("PISTA: O numero e par.\n");
else
    printf("PISTA: O numero e impar.\n");

printf("PISTA: O numero esta entre %d e %d.\n",
       MINIMO, MAXIMO);


}

/* MAIN - Manuela */

int main() {


int jogar_novamente;
int numero_secreto;
int tentativa;
int acertou;
int palpite;
int resultado;

srand(time(NULL));

do {

    numero_secreto = gerar_numero_secreto();
    acertou = 0;

    exibir_introducao();

    printf("Voce tem %d tentativas para resolver o misterio.\n\n",
           MAX_TENTATIVAS);

    exibir_pistas(numero_secreto);

    for (tentativa = 1;
         tentativa <= MAX_TENTATIVAS;
         tentativa++) {

        palpite = ler_e_validar_palpite();

        resultado =
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

printf("\nObrigado por jogar O Misterio do Numero Perdido!\n");

return 0;


}
