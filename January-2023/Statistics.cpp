#include <iostream>
#include <climits>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, c=1;
    while(cin >> n) { 
        int max=INT_MIN, min=INT_MAX;
        rep(i,0,n) {
            int a; cin >> a;
            if(max < a) max = a;
            if(min > a) min = a;
            //min = a < min ? a : min;
            //max = a > max ? a : max;
        }
        printf("Case %d: %d %d %d\n", c, min, max, max-min);
        c++;
    }
    return 0;
}