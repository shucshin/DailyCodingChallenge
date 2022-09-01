#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

void printVector(vi vec) {
    for(int i=0; i<vec.size(); i++) {
        if(i == vec.size()-1) {
            cout << vec[i] << endl;
            break;
        }
        cout << vec[i] << " ";
    }
}

void solve() {
    int n;
    cin >> n;
    vi vec;
    vec.push_back(n);
    for(int i = 1; i < n; i++) 
        vec.push_back(i);
    printVector(vec);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}