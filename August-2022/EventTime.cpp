#include <iostream>
using namespace std;

int main() {
    int a, aHr, aMin, aSec;
    int b, bHr, bMin, bSec;
    scanf("Dia %d\n%d : %d : %d", &a, &aHr, &aMin, &aSec);
    scanf(" Dia %d\n%d : %d : %d", &b, &bHr, &bMin, &bSec);
    int dia = 0, hora = 0, minuto = 0, segundo = 0;
    segundo += (bSec - aSec);
    minuto += (bMin - aMin);
    hora += (bHr - aHr);
    dia += (b-a);
    if(segundo < 0) {
        minuto--;
        segundo += 60;
    }
    if(minuto < 0) {
        hora--;
        minuto += 60;
    }
    if(hora < 0) {
        dia--;
        hora += 24;
    }
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia, hora, minuto, segundo);
    return 0;
}
