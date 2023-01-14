#include <iostream>
#include <map>
using namespace std;
using psi = pair<string,int>;
#define rep(i,a,b) for(int i = 0; i < a; i++)

int main() {
    int m, solved=0, time=0;
    char c; string s;
    map<char,int> ma;
    while(cin >> m) {
        if(m == -1) break;
        cin >> c >> s;
        if(s == "wrong") ma[c]++;
        else {
            time += m;
            solved++;
            time += ma[c]*20;
        }
    }
    cout << solved << " " << time << endl;
    return 0;
}