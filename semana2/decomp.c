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
    if(n <= 1) {
        printf("Erro, número precisa ser maior do que 1!\n");
    } else {
        int fator = 2;
        int res = n;
        printf("res: %d | fator: %d\n", res, fator);
        for(int i = n; i > 1;) {
            if(i % fator == 0) {
                res = i / fator; 
                i = res;
                if(res == 1) {
                    printf("res: %d\t|\n", res);
                } else {
                    printf("res: %d\t| fator: %d\n", res, fator);
                }
            } else {
                fator = prox_primo(fator);
                printf("oi, estou no else do fator! o fator eh -> %d\n", fator);
            }
        }
    }
    return 0;
}
