#include <stdio.h>

int main() {
    float temp;
    char escala;
    scanf("%f %c", &temp, &escala);
    
    float tempC, tempF, tempK;
    if (escala == 'C') {
       tempC = temp;
       tempF = temp * 1.8 + 32; 
       tempK = temp + 273.15;
    } else if (escala == 'F') {
        tempC = (temp - 32)/1.8;
        tempF = temp;
        tempK = tempC + 273.15;
    } else {
        tempC = temp - 273.15;
        tempF = temp * 1.8 + 32;
        tempK = temp;
    }
    printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", tempC, tempF, tempK);
    return 0;
}
