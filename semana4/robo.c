#include <stdio.h>

int main() {
    int lin, col, x, y, qntd_mov;
    char direcao;
    
    scanf(" %d %d", &lin, &col);
    char mapa[lin][col];

    for(int i = 0; i < lin; i++)
        for(int j = 0; j < col; j++)
           scanf(" %c", &mapa[i][j]);
    scanf(" %d %d %c", &x, &y, &direcao); 
    scanf(" %d", &qntd_mov); 
    x--;
    y--;

//    for(int i = 0; i < lin; i++) {
//        for(int j = 0; j < col; j++)
//           printf("%c", mapa[i][j]);
//        printf("\n");
//    }
    char obstaculo;
    for(int i = 0; i < qntd_mov; i++) {
        switch(direcao) {
            case 'N': 
                obstaculo = mapa[x-1][y]; 
                if (obstaculo == '*')
                    direcao = 'O';
                else if((obstaculo == '|' || obstaculo == '_') || (x-1 < 0))
                    direcao = 'L';
                else 
                    x--;
                break;
            case 'L':
                obstaculo = mapa[x][y+1];
                if (obstaculo == '*')
                    direcao = 'N';
                else if((obstaculo ==  '|' || obstaculo == '_') || (y+1 == col))
                    direcao = 'S';
                else 
                    y++;
                break;
            case 'S': 
                obstaculo = mapa[x+1][y];
                if (obstaculo == '*')
                    direcao = 'L';
                else if((obstaculo == '|' || obstaculo == '_') || (x+1 == lin))
                    direcao = 'O';
                else 
                    x++;
                break;
            case 'O':
                obstaculo = mapa[x][y-1];
                if (obstaculo == '*')
                    direcao = 'S';
                else if((obstaculo == '|' || obstaculo == '_') || (y-1 < 0))
                    direcao = 'N';
                else 
                    y--;
        }
    }
    printf("Posição final: %d %d\n", x+1, y+1);
    return 0;
}
