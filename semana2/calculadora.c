#include <stdio.h>

int main() {
    char op = ' ';
    double n1, n2;
    int exp;
    double res; 
    while(1) {
        scanf(" %c", &op);
        if(op == 'e') {
            break;
        } else if(op == '^') {
            scanf(" %lf %d", &n1, &exp);
        } else {
            scanf(" %lf %lf", &n1, &n2);
        }
        switch(op) {
            case '+':
                res = n1 + n2;
                printf("%.3f+%.3f=%.3f\n", n1, n2, res);
                break;
            case '-':
                res = n1 - n2;
                printf("%.3f-%.3f=%.3f\n", n1, n2, res);
                break;
            case '*':
                res = n1 * n2;
                printf("%.3f*%.3f=%.3f\n", n1, n2, res);
                break;
            case '/':
                res = n1 / n2;
                printf("%.3f/%.3f=%.3f\n", n1, n2, res);
                break;
            case '^':
                res = 1;
                for(int i = 0; i < exp; i++) {
                res *= n1;
                }
                printf("%.3f^%d=%.3f\n", n1, exp, res);
        }
    }
    return 0;
}
