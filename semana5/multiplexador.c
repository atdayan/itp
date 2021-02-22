#include <stdio.h>
#include <string.h>

int main() {
    char a[40];
    char b[40];
    scanf(" %[^\n] %[^\n]", a, b);
                
    int tam = strlen(a) + strlen(b);

    for(int i = 0; i < tam/2 + 1; i++) {
        if(a[i] != '\0')
            printf("%c", a[i]);
        if(b[i] != '\0')
            printf("%c", b[i]);
    }

    return 0;
}

