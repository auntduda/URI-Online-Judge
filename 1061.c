#include<stdio.h>

int main(){

    int d1, h1, m1, s1, d2, h2, m2, s2;

    scanf("Dia %d", &d1);
    getchar();
    scanf("%d : %d : %d", &h1, &m1, &s1);
    getchar();
    scanf("Dia %d", &d2);
    getchar();
    scanf("%d : %d : %d", &h2, &m2, &s2);
    getchar();

    int tempo_final = (h2*3600 + m2*60 + s2) - (h1*3600 - m1*60 - s1);

    printf("%d dia(s)\n", d2 - d1);
    printf("%d hora(s)\n", tempo_final/3600);
    printf("%d minuto(s)\n", (tempo_final%3600)/60);
    printf("%d segundo(s)\n", (tempo_final%3600)%60);

    return 0;

}