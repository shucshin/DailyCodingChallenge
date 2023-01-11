#include <iostream>
#include <climits>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, a, min=INT_MAX, index; cin >> n;
    rep(i,0,n) {
        cin >> a;
        if(min > a) {min = a; index = i;}
    }
    cout << index << endl;
    return 0;
}