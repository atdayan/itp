#include <stdio.h>

int main() {
    char *jogadores[] = {"Alyson", "Isaac", "Rafaela", "Wellington", "Salgado", "Careca"};
    int jog_indice;
    int n_jogadas;
    int vida_dragao;
    char jogador; 
    int atk;
    int vitoria = 0;
    scanf(" %d %d", &n_jogadas, &vida_dragao);
    
    for(int i = 0; i < n_jogadas; i++) {
        scanf(" %c %d", &jogador, &atk);
        if(atk > 14) {
            switch(jogador) {
                case 'A':
                    vida_dragao -= 10;
                    jog_indice = 0;
                    break;
                case 'I':
                    vida_dragao -= 10;
                    jog_indice = 1;
                    break;
                case 'R':
                    vida_dragao -= 6;
                    jog_indice = 2;
                    break;
                case 'W':
                    vida_dragao -= 8;
                    jog_indice = 3;
                    break;
                case 'S':
                    vida_dragao -= 4;
                    jog_indice = 4;
                    break;
                case 'C':
                    vida_dragao -= 1;
                    jog_indice = 5;
                    break;
            } 
            if(vida_dragao <= 0) {
                vitoria++;
                break;
            } 
        }
    }
    if(vitoria) {
        printf("%s derrotou o dragão!\n", jogadores[jog_indice]);
    } else {
        printf("Casa caiu!\n"); 
    }
    return 0;
}
