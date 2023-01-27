#include <iostream>
using namespace std;

int main() {
    int m; cin >> m;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            if(i == m-1) {
                cout << '*';
            }
            else {
                if(j == 0 || j == m-1) cout << '*';
                else cout << ' '; 
            }
        } cout << ' ';
        for(int j = 0; j < m; j++) {
            if(i == 0) {
                cout << '*';
            }
            else {
                if(j == 0 || j == m-1) cout << '*';
                else cout << ' '; 
            }
        }
        cout << endl;
    }
    return 0;
}