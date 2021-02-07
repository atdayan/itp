#include <stdio.h>

int calc_score(int s1, int s2, int s3) {
    if((s1 >= s2 && s1 <= s3) || (s1 >= s3 && s1 <= s2)) {
        return s1;
    } else if((s2 >= s1 && s2 <= s3) || (s2 >= s3 && s2 <= s1)) {
        return s2;
    }
    return s3;
}

int get_score_usuario() {
    int x, y, z;
    scanf(" %d %d %d", &x, &y, &z); 
    return calc_score(x, y, z);
}
int skatista() {
    return calc_score(get_score_usuario(), get_score_usuario(), get_score_usuario());  
}

int main() {
    int skate_a = skatista(); 
    int skate_b = skatista(); 
    
    if(skate_a > skate_b) {
        printf("A\n");
    } else if(skate_b > skate_a) {
        printf("B\n");
    } else {
        printf("empate\n");
    }

    return 0;
}
