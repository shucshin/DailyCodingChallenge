#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, k; cin >> n;
    string s, restaurant;
    rep(i,0,n) {
        bool peasoup = false, pancakes = false;
        cin >> k; cin.ignore();
        getline(cin, restaurant);
        rep(j,0,k) {
            getline(cin, s);
            if(s == "pea soup") peasoup = true;
            if(s == "pancakes") pancakes = true;
            if(peasoup && pancakes) {
                cout << restaurant << endl;
                return 0;
            }
        }
    }
    cout << "Anywhere is fine I guess\n";
    return 0;
}