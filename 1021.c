#include<stdio.h>

int casting(double v){

    int v1 = (int) v;

    return v1; 

}

int main(){

    double valor;

    scanf("%lf", &valor);

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", casting(valor)/100);
    printf("%d nota(s) de R$ 50.00\n", (casting(valor)%100)/50);
    printf("%d nota(s) de R$ 20.00\n", ((casting(valor)%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n", (((casting(valor)%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n", ((((casting(valor)%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n", (((((casting(valor)%100)%50)%20)%10)%5)/2);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", ((((((casting(valor)%100)%50)%20)%10)%5)%2)/1);

    int frac = (valor - (int) valor) * 100;
    
    printf("%d moeda(s) de R$ 0.50\n", casting(frac/50)); 
    printf("%d moeda(s) de R$ 0.25\n", casting(frac%50)/25);
    printf("%d moeda(s) de R$ 0.10\n", (casting(frac%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n", ((casting(frac%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n", (((casting(frac%50)%25)%10)%5)/1);

    return 0;

}