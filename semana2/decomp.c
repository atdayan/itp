#include <stdio.h>

int prox_primo( int numero) {
    int num_final = numero + 1;
    for(int i = 2; i < num_final/2; i++ ) {
        if(num_final % i == 0) {
            num_final++;
            continue;
        }
    }     
    return num_final;
}
int main() {
    int n;
    scanf(" %d", &n);
    int res = n;
    int fator = 2;
    int divisivel = 0;
    if(n <= 1) {
        printf("Erro, número precisa ser maior do que 1!\n");
    } else {
        while(1) {
            if(res % fator == 0) {
                while(res % fator == 0) {
                    res /= fator;
                    divisivel++;
                }
                printf("%d^%d", fator, divisivel);
                if(res > 1) {
                    printf("*");
                }
            }            
            if(res == 1) {
                break;
            }
            divisivel = 0;
            fator = prox_primo(fator);
        }
    }
    return 0;
}
