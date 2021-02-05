#include <stdio.h>
#include <math.h>

double calc_dist(double x1, double y1, double x2, double y2) {
    double dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2)); 
    return dist;
}
int calc_pont(double dist, double ant_dist) {
    double diferenca = fabs(dist-ant_dist);
    if(dist >= 0 && dist <= 1) {
       return 10; 
    } else if(dist > 1 && dist <= 2) {
        return 6;
    }else if(dist > 2 && dist <= 3) {
        return 4;
    }
    if(diferenca >= 0 && diferenca <= 1) {
       pont_bonus = 5; 
    } else if(diferenca > 1 && diferenca <= 2) {
       pont_bonus = 3; 
    }else if(diferenca > 2 && diferenca <= 3) {
       pont_bonus = 2; 
    }
    return 0;
}

int main() {
    double user_x, user_y;
    scanf(" %lf %lf", &user_x, &user_y);
    double dist = calc_dist(x,y,0,0);
    int pont = calc_pont(dist);
    int bonus = 0;

    for(int i = 0; i < 9; i++) {
        scanf(" %lf %lf", &x, &y);
        dist = calc_dist(x,y,0,0); 
        
    }
    printf("%lf",calc_dist(x,y,0,0));
    return 0;
}
