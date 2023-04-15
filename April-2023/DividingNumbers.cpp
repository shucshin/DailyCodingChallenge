#include <iostream>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;
    int a = 0, b = 0;
    set<int> x, y;
    for(int i = n; i > 0; i--) {
        if(a >= b) {b += i; y.insert(i);}
        else {a += i; x.insert(i);}
    }
    cout << abs(a-b) << endl;
    cout << x.size() << " ";
    for(auto z : x) {
        cout << z << " ";
    } cout << endl;
    return 0;
}