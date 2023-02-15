#include <iostream>
using namespace std;

int main() {
    int m, n, knights; 
    while(cin >> m >> n) {
        if(!(m+n)) break;
        if(min(m,n) == 1) {
            knights = max(m,n);
        }
        else if(min(m,n) == 2) {
            if(max(m,n) == 2 || max(m,n) == 3) {
                knights = 4;
            }
            else {
                knights = ((((m*n)/4)+1)/2)*4;
                if(((m*n)/4)%2 == 0) {
                    knights += (m*n)%4;
                }
            }
        }
        else {
            (m%2==0) ? knights = m/2*n : knights = (m+1)/2*n - n/2;
        }
        printf("%d knights may be placed on a %d row %d column board.\n", knights, m, n);
    }
    return 0;
}