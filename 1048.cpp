#include<bits/stdc++.h>

using namespace std;

int main(){

    int percentual;

    float salario, salario_final, reajuste;

    scanf("%f", &salario);

    if(salario > 0 && salario <= 400.00){
        percentual = 15;

        reajuste = (0.15)*salario;

        salario_final = salario + reajuste;
    }

    if(salario > 400.00 && salario <= 800.00){
        percentual = 12;

        reajuste = (0.12)*salario;

        salario_final = salario + reajuste;
    }

    if(salario > 800.00 && salario <= 1200.00){
        percentual = 10;

        reajuste = (0.1)*salario;

        salario_final = salario + reajuste;
    }

    if(salario > 1200.00 && salario <= 2000.00){
        percentual = 7;

        reajuste = (0.07)*salario;

        salario_final = salario + reajuste;
    }

    if(salario > 2000.00){
        percentual = 4;

        reajuste = (0.04)*salario;

        salario_final = salario + reajuste;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario_final, reajuste, percentual);

    return 0;

}