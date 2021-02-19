#include <stdio.h>

int main() {
    char mapa[10][10];
    int coords[20];
    
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            mapa[i][j] = '~';

    for(int i = 0; i < 20; i++)
        scanf(" %d", &coords[i]);

    int c_canoa[] = {coords[0], coords[1]}; 
    int c_barco[] = {coords[2], coords[3], coords[4], coords[5]}; 
    int c_fragata[] = {coords[6], coords[7], coords[8], coords[9], coords[10], coords[11]}; 
    int c_destroier[] = {coords[12], coords[13], coords[14], coords[15], coords[16], coords[17], coords[18], coords[19]}; 

    char canoa = '*'; 
    char barco[2];
    char dir;
   // for(int i = 0; i < 2; i++) {
        // (4,4) (4,5)
        if(c_barco[0] == c_barco[2])
           dir = 'h';
        else
           dir = 'v'; 
    //}
    if(dir == 'h') {
        barco[0] = '<';
        barco[1] = '>';
    } else {
        barco[0] = '^';
        barco[1] = 'v';
    }
    
    char fragata[3];
    if(c_fragata[0] == c_fragata[2]) {
        dir = 'h';
    } else {
        dir = 'v';
    }
    if(dir == 'h') {
        fragata[0] = '<';
        fragata[1] = '=';
        fragata[2] = '>';
    } else {
        fragata[0] = '^';
        fragata[1] = '|';
        fragata[2] = 'v';
    }    
    char destroier[4];
    if(c_destroier[0] == c_destroier[2]) {
        dir = 'h';
    } else {
        dir = 'v';
    }
    if(dir == 'h') {
        destroier[0] = '<';
        destroier[1] = '=';
        destroier[2] = '=';
        destroier[3] = '>';
    } else {
        destroier[0] = '^';
        destroier[1] = '|';
        destroier[2] = '|';
        destroier[3] = 'v';
    }    

    char embarc[10][10];
    mapa[c_canoa[0]][c_canoa[1]] = canoa;
    for(int i = 0, j = 0; i < 4; i+=2, j++)
        mapa[c_barco[i]][c_barco[i+1]] = barco[j];
    for(int i = 0, j = 0; i < 6; i+=2, j++)
        mapa[c_fragata[i]][c_fragata[i+1]] = fragata[j];
    for(int i = 0, j = 0; i < 8; i+=2, j++)
        mapa[c_destroier[i]][c_destroier[i+1]] = destroier[j];

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
        printf("%c", mapa[i][j]);
        }
    printf("\n");
    }

    return 0;
}
