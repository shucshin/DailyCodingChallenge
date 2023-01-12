#include <iostream>
#include <cmath>
using namespace std;
using ld = long double;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int p, a, b, c, d, n;  cin >> p >> a >> b >> c >> d >> n;
    ld maxPrice = p*(sin(a+b)+cos(c+d)+2), diff = 0.0;
    rep(i,2,n+1) {
        ld price = p*(sin(a*i+b)+cos(c*i+d)+2);
        if(maxPrice-price > 0.0 && maxPrice-price > diff) diff = maxPrice-price;
        if(maxPrice < price) maxPrice = price;
    }
    printf("%.6Lf\n", diff);
    return 0;
}