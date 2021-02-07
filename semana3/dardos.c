#include <stdio.h>
#include <math.h>

double calc_dist(double x1, double y1, double x2, double y2) {
    double dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2)); 
    return dist;
}
int calc_pontuacao(double distancia, int bonus) {
    int pont = 0;
    if(distancia >= 0 && distancia <= 1) {
        pont = 10;
    } else if(distancia > 1 && distancia <= 2) {
        pont = 6;
    } else if(distancia > 2 && distancia <= 3) {
        pont = 4;
    } 
    if(bonus) {
        return pont/2;
    }
    return pont;
}
int main() {
    double x, y;
    double dist_centro;
    double dist_ponto_anterior;
    double aux_x, aux_y;
    int pont = 0;
    int pont_bonus = 0;
    scanf("%lf %lf", &x, &y);
    dist_centro = calc_dist(x, y, 0, 0);
    pont = calc_pontuacao(dist_centro, 0);
    aux_x = x;
    aux_y = y;
    for(int i = 0; i < 9; i++) {
        scanf("%lf %lf", &x, &y);
        dist_centro = calc_dist(x, y, 0, 0);
        dist_ponto_anterior = calc_dist(x, y, aux_x, aux_y);
        
        pont += calc_pontuacao(dist_centro, 0);
        pont_bonus += calc_pontuacao(dist_ponto_anterior, 1);
        aux_x = x;
        aux_y = y;
    }
    printf("%d\n", (pont + pont_bonus));
    return 0;
}
