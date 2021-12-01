#include<iostream>

using namespace std;

int main()
{
    long long t, x, y, z, a, b, c;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> x >> y >> z;
        if(!(x==y && x >= z || y==z && y >= x || x==z && x >= y)) {
            cout << "NO\n";
            continue;
        }
        if(x == y && y == z) {
            printf("YES\n%llu %llu %llu\n", x, x, x);
            continue;
        }
        if(x != y) {
            b = x;
            a = y;
            c = min(a,b)-1;
            if(c==0)
                c++;
        }
        else {
            a = x;
            b = z;
            c = b-1;
            if(c==0)
                c++;
        }
        printf("YES\n%llu %llu %llu\n", a, b, c);
    }
    return 0;
}