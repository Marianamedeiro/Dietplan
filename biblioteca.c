#include <time.h>
#include <stdlib.h>
#include <string.h>



//////
////// Funções do Módulo biblioteca
//////



///
/// Faz uma pausa por n segundos, com n sendo passado como parâmetro
///
void delay(int segundos) {
    int tempo = 1000 * segundos;
    clock_t inicio = clock();
    while (clock() < inicio + tempo) {
        // não faz nada, apenas gasta tempo
    }
}



///
/// Limpa a tela; funciona em Linux / MacOS / Windows
///
void limpaTela(void) {
    if (system("clear") || system("cls")) {
        // limpa a tela, Linux, Mac e Windows
    }
}



///
/// Retorna 1 se o caractere recebido for um dígito (entre 0 e 9)
/// retorna 0 caso contrário
///
int ehDigito(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}



///
/// Retorna 1 se string recebido corresponde a um número de celular válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validaCelular(char* celular) {
    int tam;
    tam = strlen(celalar);
    if (tam != 11) {
        return 0;
    }
    for (int i = 0; i < tam; i++) {
        if (!ehDigito(celular[i])) {
            return 0;
        }
    }
    return 1;
}