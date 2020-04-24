#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, x, y;

    scanf("%d %d %d %d", &a, &b, &x, &y);

    int tempo_total_minutos = ((x * 60) + y) - ((a * 60) + b);

    if(a == x && b == y){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");    
        
        return 0;
    }

    if(tempo_total_minutos < 0){
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 23 + (tempo_total_minutos/60), 60 + (tempo_total_minutos%60));

        return 0;
    }
        
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_total_minutos/60, tempo_total_minutos%60);

    return 0;

}