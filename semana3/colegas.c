#include <stdio.h>
#include <math.h>

int somar_divisores(int n) {
    int somatorio = 1;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            somatorio += i;
        }
    }
    return somatorio;
}
int sao_colegas(int n1, int n2) {
    if((fabs(somar_divisores(n1) - n2) <= 2) && (fabs(somar_divisores(n2) - n1) <= 2)) {
        return 1;
    }
    return 0;
}
int main() {
    int n1, n2;
    scanf(" %d %d", &n1, &n2);
    if(sao_colegas(n1, n2)) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}
