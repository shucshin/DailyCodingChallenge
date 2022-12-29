#include <iostream>
#include <stack>
#include <queue>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    //freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    int n, c = 1;
    while(cin >> n) {
        if(!n) break;
        stack<string> a;
        string s;
        cout << "SET " << c << endl;
        rep(i,0,n) {
            cin >> s;
            if(i%2 == 0) cout << s << endl;
            else a.push(s);
        }
        //printf("SET %d\n", c);
        while(!a.empty()) {
            cout << a.top() << endl; a.pop();
        }
        c++;
    }
    return 0;
}