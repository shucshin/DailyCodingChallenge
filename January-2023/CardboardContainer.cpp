#include <iostream>
#include <cmath>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int v; cin >> v;
    int a = 1;
    for(int i = 1; i*i*i <= v; i++) {
        if(v%i == 0) a = i;
    }

    int z = v/a;
    int b = 1;
    for(int i = 1; i*i <= z; i++) {
        if(z%i == 0) b = i;
    }
    int c = z/b;
    cout << ((a*b)+(b*c)+(a*c))*2 << endl;
    return 0;
}