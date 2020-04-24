#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    if(a == b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    
        return 0;
    }

    if(a < b){
        printf("O JOGO DUROU %d HORA(S)\n", (b - a));

        return 0;
    }

    if(a > b){
        printf("O JOGO DUROU %d HORA(S)\n", (24 - a) + b);
    
        return 0;
    }

    return 0;

}