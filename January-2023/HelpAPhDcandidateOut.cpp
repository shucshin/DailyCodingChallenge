#include <iostream>
#include <sstream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n; cin.ignore();
    string s,sub;
    rep(i,0,n) {
        cin >> s;
        if(s == "P=NP") {
            printf("skipped\n"); continue;
        }
        stringstream ss(s);
        int ans=0;
        while(ss.good()) {
            getline(ss,sub,'+');
            ans += stoi(sub);
        }
        cout << ans << endl;
    } 
    return 0;
}