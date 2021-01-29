#include <stdio.h>

int main() {
    int td1, fg1, pat1;
    int td2, fg2, pat2;
        
    scanf("%i %i %i", &td1, &fg1, &pat1);
    scanf("%i %i %i", &td2, &fg2, &pat2);

    int totSaints = td1*6 + fg1*3 + pat1;
    int totBucaneers = td2*6 + fg2*3 + pat2;
                        
    printf("Placar: Saints %i x %i Bucaneers\n", totSaints, totBucaneers);

    if(totSaints > totBucaneers) {
        printf("Saints venceu!\n");
    } else if(totBucaneers > totSaints) {
        printf("Bucaneers venceu!\n");
    } else {
        printf("Empate!\n");
    }
    
   return 0;
}
