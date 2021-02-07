#include <stdio.h>

void imprime_ronda(int h, int m, int s) {
    printf("%.2d:%.2d:%.2d\n", h, m, s);
}

int hora(int h, int h2) {
    if(h + h2 > 23) {
        return h + h2 - 24;
    }
    return h + h2;
}
int min_seg(int m, int m2) {
    return m + m2;
}

void montar_horario(int h, int m, int s, int h2, int m2, int s2) {
    int hora_final, min_final, seg_final;
    if(s + s2 > 59) {
        seg_final =  s + s2 - 60;
        m += 1;
    } else {
        seg_final = s + s2;
    }

    if(m + m2 > 59) {
        min_final = m + m2 - 60;
        h += 1;
    } else {
        min_final = m + m2;
    }

    if(h + h2 > 23) {
        hora_final = h + h2 - 24;
    } else {
        hora_final = h + h2;
    }

    imprime_ronda(hora_final, min_final, seg_final); 
}
int main() {
    int h, m, s;
    scanf(" %d %d %d", &h, &m, &s);
    montar_horario(h, m, s, 1, 0, 0);
    montar_horario(h, m, s, 2, 10, 30);
    montar_horario(h, m, s, 4, 40, 50);
    montar_horario(h, m, s, 12, 5, 5);

    return 0;
}
