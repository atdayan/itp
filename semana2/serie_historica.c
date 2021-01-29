#include <stdio.h>

int main() {
    int qntdJogos;
    int sTD, sFG, sPAT;
    int bTD, bFG, bPAT;
    int totResSaints = 0;
    int totResBucaneers = 0;
    int totTDSaints = 0; 
    int totFGSaints = 0; 
    int totPATSaints = 0; 
    int totTDBucaneers = 0; 
    int totFGBucaneers = 0; 
    int totPATBucaneers = 0; 

    scanf("%d", &qntdJogos);
    for(int i = 0; i < qntdJogos; i++) {
        scanf("%d %d %d", &sTD, &sFG, &sPAT);
        scanf("%d %d %d", &bTD, &bFG, &bPAT);
        totResSaints    += 6*sTD + 3*sFG + sPAT; 
        totResBucaneers += 6*bTD + 3*bFG + bPAT; 
        totTDSaints += sTD; 
        totFGSaints += sFG; 
        totPATSaints += sPAT; 
        totTDBucaneers += bTD; 
        totFGBucaneers  += bFG; 
        totPATBucaneers += bPAT; 
    }
    // analisa resultado final
    if(totResSaints > totResBucaneers) {
        printf("Saints é o campeão na série histórica!\n");
        printf("Placar: %d x %d\n", totResSaints, totResBucaneers);
    } else if(totResSaints < totResBucaneers) {
        printf("Bucaneers é o campeão na série histórica!\n");
        printf("Placar: %d x %d\n", totResBucaneers, totResSaints);
    } else {
        printf("Série histórica empatada em %d pontos!\n", totResSaints);
    }
    // analisa Touch Downs
    if(totTDSaints > totTDBucaneers) {
        printf("Saints marcou mais Touch Downs(%d)\n", totTDSaints);
    } else if(totTDSaints < totTDBucaneers) {
        printf("Bucaneers marcou mais Touch Downs(%d)\n", totTDBucaneers);
    } else {
        printf("Número de Touch Downs empatado(%d)\n", totTDSaints);
    }
    // analisa Field Goals
    if(totFGSaints > totFGBucaneers) {
        printf("Saints marcou mais Field Goals(%d)\n", totFGSaints);
    } else if(totFGSaints < totFGBucaneers) {
        printf("Bucaneers marcou mais Field Goals(%d)\n", totFGBucaneers);
    } else {
        printf("Número de Field Goals empatado(%d)\n", totFGSaints);
    }
    // analisa Extra Points
    if(totPATSaints > totPATBucaneers) {
        printf("Saints marcou mais Pontos Extras(%d)\n", totPATSaints);
    } else if(totPATSaints < totPATBucaneers) {
        printf("Bucaneers marcou mais Pontos Extras(%d)\n", totPATBucaneers);
    } else {
        printf("Número de Pontos Extras empatado(%d)\n", totPATSaints);
    }

    return 0;
}
    
