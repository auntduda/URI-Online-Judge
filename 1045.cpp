#include<bits/stdc++.h>

using namespace std;

int main(){

    float lados[3], a, b, c;

    cin >> lados[0] >> lados[1] >> lados[2];

    sort(lados, lados+3);

    a = lados[2];

    b = lados[1];

    c = lados[0];

    if(a >= (b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;

        return 0;
    }

    if((a*a) == (b*b + c*c)){
        cout << "TRIANGULO RETANGULO" << endl;
    }

    if((a*a) > (b*b + c*c)){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    if((a*a) < (b*b + c*c)){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if(a == b && b == c && a == c){
        cout << "TRIANGULO EQUILATERO" << endl;

        return 0;
    }

    if(a == b || b == c || a == c){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}