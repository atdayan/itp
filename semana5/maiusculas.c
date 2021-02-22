#include <stdio.h>
#include <string.h>
#include <ctype.h>

void converte_minuscula(char str[]) {
    for(int i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);
}

int main() {
    char frase[60];
    fgets(frase, 60, stdin);
    
    converte_minuscula(frase);
    frase[0] = toupper(frase[0]);
    for(int i = 1; i < strlen(frase); i++) {
        if(frase[i-1] == ' ') {
            frase[i] = toupper(frase[i]);
        }
    }
    printf("%s", frase);

    return 0;
}
