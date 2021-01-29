#include <stdio.h>

int main()
{
    int hora;
    int minuto;

    scanf("%d:%d", &hora, &minuto);
    
    if(hora >= 12) {
        if (minuto > 0) {
            printf("Hora de acordar...\n");
        } else {
            printf("Cedo demais!\n");
        }
    } else {
        printf("Cedo demais!\n");
    }

	return 0;
}
