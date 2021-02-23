#include <stdio.h>
#include <string.h>

const char S[]=
    {'0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J',
    'K','L','M','N','O','P','Q','R','S','T',
    'U','V','W','X','Y','Z','.',',','?',' '};

int verifica_chave() {
    char lixo[2];
    fgets(lixo, 2, stdin);
    if(lixo[0] != '\n') 
        return 0;

    return 1;
}

int verifica_msg(char msg[]) {
    int confere;
    for(int i = 0; i < strlen(msg); i++) {
        confere = 0;
        for(int j = 0; j < 40; j++) 
            if(msg[i] == S[j]) 
                confere = 1;
        if(!confere)
            return 0;
    }
    return 1;
}

int indice_s(char caractere) {
    for(int i = 0; i < 40; i++) {
        if(S[i] == caractere) 
            return i;
    }
}

void cifra_msg(char msg[], int chave[]) {
    int pos;
    for(int i = 0, j = 0; i < strlen(msg); i++) {
        pos = indice_s(msg[i]);
        if(pos + chave[j] >= 40) 
            msg[i] = S[(pos + chave[j]) - 40];
        else 
            msg[i] = S[pos+chave[j]];

        j++;
        if(j == 4)
            j = 0;
    }
}

int main() {
    char str_chave[5];
    int chave[4];
    fgets(str_chave, 5, stdin);
    if(verifica_chave()) {
        char msg[200];

        for(int i = 0; i < 4; i++) 
            chave[i] = (int) str_chave[i] - '0';

        scanf("%[^\n]", msg);
        if(verifica_msg(msg)) {
            cifra_msg(msg,chave);
            printf("%s\n", msg);
        } else {
            printf("Caractere invalido na entrada!\n");
        }

    } else {
        printf("Chave invalida!\n");
    }

    return 0;
}
