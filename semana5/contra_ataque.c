#include <stdio.h>
#include <string.h>

const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z','.',',','?',' '};

int indice_s(char caractere) {
    for(int i = 0; i < 40; i++) {
        if(S[i] == caractere) 
            return i;
    }
}

void testa_chave(int chave[]) {
}

int descobre_chave(char msg[], const char fragmento[], int chave[]) {
    for(int i = 0, j = 0; i < strlen(msg); i++) {
        for(int k = 0; k < 
        if((indice_s(msg[i]) - indice_s(fragmento[i])) < 0) {
            chave[j] = indice_s(msg[i]) + (40 - indice_s(fragmento[i]));
        } else {
            chave[j] = indice_s(msg[i]) - indice_s(fragmento[i]);
        }
    }
    for(int i = 0; i < strlen(msg); i+=4) {
        for(int j = i; j < i+4; j++)
            printf("%c", msg[j]);
        printf("\n");
    }
}

int main() {
    const char fragmento[] = "QUE A FORCA ESTEJA COM VOCE";
    char msg_cifrada[200];
    char msg_original[200];
    int chave[4];
    scanf("%[^\n]", msg_cifrada);

    if(descobre_chave(msg_cifrada, fragmento, chave)) {
        printf("detectado\n");
    } else {
        printf("Mensagem nao e da Resistencia!\n");
    }

    return 0;
}
