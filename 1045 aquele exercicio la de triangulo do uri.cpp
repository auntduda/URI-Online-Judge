#include<bits/stdc++.h>

using namespace std;

main(){

    float a, b, c;

    cin >> a >> b >> c;

    if(a == b && b==c){
        cout << 'TRIANGULO EQUILATERO' << endl;
    }

    else if(a==b || b==c || a==c){
        cout << 'TRIANGULO ISOSCELES' << endl;
    }

    else if(a*a == (b*b + c*c)){
        cout << 'TRIANGULO RETANGULO' << endl;
    }

    else if(a*a > (b*b + c*c)){
        cout << 'TRIANGULO OBTUSANGULO' << endl;
    }
    else if(a*a < (b*b + c*c)){
        cout << 'TRIANGULO ACUTANGULO' << endl;
    }
    else{
        cout << 'NAO FORMA TRIANGULO' << endl;
    }
}
