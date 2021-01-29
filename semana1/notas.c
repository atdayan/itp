#include <stdio.h>

int main() {
    int total;
    scanf("%d", &total);
    
    int nota = 100;
    int totalnotas = 0;
    while (1) {
        if (total >= nota) {
            total -= nota;
            totalnotas += 1;
        } else {
            if (totalnotas > 0) {
                if (nota == 1) {
                    printf("%d moeda(s) de %d\n", totalnotas, nota);
                } else {
                    printf("%d nota(s) de %d\n", totalnotas, nota);
                }
            }
            if (nota == 100) {
                nota = 50; 
            } else if (nota == 50) {
                nota = 20;
            } else if (nota == 20) {
                nota = 10; 
            } else if (nota == 10) {
                nota = 5;
            } else if (nota == 5) {
                nota = 2;
            } else if (nota == 2) {
                nota = 1;
            }
            totalnotas = 0;
            if (total == 0) {
                break;
            }
        }

    }

    return 0;
}
