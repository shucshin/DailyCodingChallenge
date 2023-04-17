#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()

int main() {
    int n; string s; cin >> n >> s;
    sort(all(s));
    cout << s << endl;
    return 0;
}