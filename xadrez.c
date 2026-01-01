#include <stdio.h>
 
  // CONSTANTES DE MOVIMENTAÇÃO
#define BISPO_MOV   5
#define TORRE_MOV   5
#define RAINHA_MOV  8

//FUNÇÕES RECURSIVAS – NÍVEL MESTRE
   
// Torre – 5 casas para a direita 
void moverTorre(int passos) {
    if (passos == 0)
        return;

    printf("Direita\n");
    moverTorre(passos - 1);
}

//Rainha – 8 casas para a esquerda
void moverRainha(int passos) {
    if (passos == 0)
        return;

    printf("Esquerda\n");
    moverRainha(passos - 1);
}

//BISPO – Loops Aninhados - Diagonal direita para cima

void moverBispo() {
    int i, j;

    for (i = 1; i <= BISPO_MOV; i++) {
        for (j = 1; j <= 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

//CAVALO – Nível Mestre
  // Variáveis múltiplas + break / continue
   //Movimento em L para cima e direita

void moverCavaloMestre() {
    int vertical, horizontal;

    for (vertical = 1; vertical <= 2; vertical++) {

        if (vertical == 2) {
            continue; // ignora a segunda subida
        }

        printf("Cima\n");

        for (horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
            break; // executa apenas uma vez
        }
    }
}

int main() {

    int i;

    // NÍVEL NOVATO

    printf("===== NIVEL NOVATO =====\n\n");

    //BISPO – FOR
    printf("BISPO:\n");
    for (i = 1; i <= BISPO_MOV; i++) {
        printf("Cima Direita\n");
    }

    printf("\n");

    //TORRE – WHILE
    printf("TORRE:\n");
    i = 1;
    while (i <= TORRE_MOV) {
        printf("Direita\n");
        i++;
    }

    printf("\n");

    //RAINHA – DO WHILE
    printf("RAINHA:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= RAINHA_MOV);

     //  NÍVEL AVENTUREIRO
     // CAVALO – Loops Aninhados
    //   Movimento em L (Baixo + Esquerda)
    printf("\n===== NIVEL AVENTUREIRO =====\n\n");
    printf("CAVALO:\n");

    int vertical, horizontal;

    for (vertical = 1; vertical <= 2; vertical++) {
        printf("Baixo\n");

        horizontal = 0;
        while (horizontal < 1) {
            printf("Esquerda\n");
            horizontal++;
        }
    }

    //NÍVEL MESTRE
    
    printf("\n===== NIVEL MESTRE =====\n\n");

    printf("BISPO:\n");
    moverBispo();

    printf("\nTORRE:\n");
    moverTorre(TORRE_MOV);

    printf("\nRAINHA:\n");
    moverRainha(RAINHA_MOV);

    printf("\nCAVALO:\n");
    moverCavaloMestre();

    return 0;
}
