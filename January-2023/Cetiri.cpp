#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using vi = vector<int>;
#define all(a) (a).begin(), (a).end()

int main() {
    vi v(3); cin >> v[0] >> v[1] >> v[2];
    sort(all(v));
    int a=v[0], b=v[1], c=v[2]; 
    if(abs(a-b) == abs(b-c)) {
        cout << c + abs(b-c) << endl;
    } else if(abs(a-b) > abs(b-c)) {
        cout << b - abs(b-c) << endl;
    } else {
        cout << a + abs(b-c) << endl;
    }
    return 0;
}