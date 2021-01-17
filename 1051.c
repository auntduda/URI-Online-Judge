#include<stdio.h>

int main(){

    double salario, ir;

    scanf("%lf", &salario);

    if(salario <= 2000.00){
        printf("Isento\n");

        return 0;
    }

    if(salario > 2000.00 && salario <= 3000.00){
        ir = (salario - 2000.00) * 0.08;

        printf("R$ %.2lf\n", ir);

        return 0;
    }

    if(salario > 3000.00 && salario <= 4500.00){
        ir = 80.00 + (salario - 3000.00) * 0.18;

        printf("R$ %.2lf\n", ir);

        return 0;
    }

    if(salario > 4500.00){
        ir = 80.00 + 270.00 + (salario - 4500) * 0.28;

        printf("R$ %.2lf\n", ir);

        return 0;
    }

    return 0;

}