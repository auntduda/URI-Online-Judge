#include<bits/stdc++.h>

using namespace std;

int main(){

    char coluna[13], tipo[9], alimentacao[11];

    cin >> coluna >> tipo >> alimentacao;

    if(!strcmp(coluna, "vertebrado")){
        if(!strcmp(tipo, "ave")){
            if(!strcmp(alimentacao, "carnivoro")){
                printf("aguia\n");

                return 0;
            }

            else{
                printf("pomba\n");

                return 0;
            }
        }

        else{
            if(!strcmp(alimentacao, "onivoro")){
                printf("homem\n");

                return 0;
            }

            else{
                printf("vaca\n");

                return 0;
            }
        }
    }

    else{
        if(!strcmp(tipo, "inseto")){
            if(!strcmp(alimentacao, "hematofago")){
                printf("pulga\n");

                return 0;
            }

            else{
                printf("lagarta\n");

                return 0;
            }
        }

        else{
            if(!strcmp(alimentacao, "hematofago")){
                printf("sanguessuga\n");

                return 0;
            }

            else{
                printf("minhoca\n");

                return 0;
            }
        }
    }

}