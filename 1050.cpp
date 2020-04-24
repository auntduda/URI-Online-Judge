#include<bits/stdc++.h>

using namespace std;

int main(){

    int ddd;

    scanf("%d", &ddd);

    if(ddd/10 == 1){
        if(ddd%10 == 1){
            printf("Sao Paulo\n");

            return 0;
        }

        if(ddd%10 == 9){
            printf("Campinas\n");

            return 0;
        }
    }

    if(ddd/10 == 2){
        if(ddd%10 == 1){
            printf("Rio de Janeiro\n");

            return 0;
        }

        if(ddd%10 == 7){
            printf("Vitoria\n");

            return 0;
        }
    }

    if(ddd/10 == 3){
        if(ddd%10 == 2){
            printf("Juiz de Fora\n");

            return 0;
        }

        if(ddd%10 == 1){
            printf("Belo Horizonte\n");

            return 0;
        }
    }

    if(ddd == 61){
        printf("Brasilia\n");

        return 0;
    }

    if(ddd == 71){
        printf("Salvador\n");

        return 0;
    }

    printf("DDD nao cadastrado\n");

    return 0;

}