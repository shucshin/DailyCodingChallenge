#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int par=0, impar=0, positivo=0, negativo=0, a;
    for(int i = 0; i < 5; i++) {
        cin >> a;
        if(a > 0)
            positivo++;
        if(a < 0)
            negativo++;
        if(abs(a)%2 == 0)
            par++;
        if(abs(a)%2 != 0)
            impar++;
    }
    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << positivo << " valor(es) positivo(s)\n";
    cout << negativo << " valor(es) negativo(s)\n";
}