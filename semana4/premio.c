#include <stdio.h>

int main() {
    int tot_simbs, n_amigos;
    scanf(" %d %d", &tot_simbs, &n_amigos);

    int simbolos_coletados[n_amigos][tot_simbs];
    int n_simbs; 
    for(int i = 0; i < n_amigos; i++) {
        scanf(" %d", &n_simbs);
        for(int j = 0; j < n_simbs; j++) {
            scanf(" %d", &simbolos_coletados[i][j]);
        }        
        for(int j = n_simbs; j < tot_simbs; j++) {
            simbolos_coletados[i][j] = -1;
        }        
    }

    int todos_simbolos[tot_simbs]; 
    for(int i = 0; i < tot_simbs; i++)
        todos_simbolos[i] = i;
    
    int simbolo;
    for(int i = 0; i < n_amigos; i++) {
        for(int j = 0; j < tot_simbs; j++) {
           simbolo = simbolos_coletados[i][j]; 

           for(int k = 0; k < tot_simbs; k++) {
               if(simbolo == todos_simbolos[k]) {
                   todos_simbolos[k] = -1;
               }
           }
        }
    }
    
    printf("[");
    for(int i = 0; i < tot_simbs; i++) {
        if(todos_simbolos[i] != -1) {
            printf(" ");
            printf("%d", todos_simbolos[i]);
            if(i+1 < tot_simbs) 
                printf(",");
        }
    }
    printf(" ]\n");

    return 0;
}

