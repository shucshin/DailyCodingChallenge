#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

bool same(vi deck) {
    rep(i,0,deck.size()) {
        if(deck[i] != i) return false;
    } return true;
}

int main() {
    // out-shuffle AEBFCGDH if odd a needs 1 more
    // in-shuffle EAFBGCHD if odd b needs 1 more
    int n, shuffles=0; cin >> n; 
    string s; cin >> s;
    vi deck; rep(i,0,n) deck.pb(i); queue<int> a, b;
    // 0 1 2 (3/2 => 1) when out a = 0 1, b = 2; when in a = 0, b = 1 2
    // 0 1 2 3 (4/2 => 2) when out a = 0 1, b = 2 3; when in a = 0 1
    // 0 1 2 3 4 (5/2 => 2) when out a = 0 1 2, b = 3 4; when in a = 0 1, b = 2 3 4
    do {
        if(s == "out" && n%2!=0) {rep(i,0,n) (i <= n/2) ? a.push(deck[i]) : b.push(deck[i]);}
        else {rep(i,0,n) (i < n/2) ? a.push(deck[i]) : b.push(deck[i]);}
        deck.clear();
        if(s == "out") {
            while(!a.empty() || !b.empty()) {
                if(!a.empty()) {deck.pb(a.front()); a.pop();}
                if(!b.empty()) {deck.pb(b.front()); b.pop();}
            }
        } else {
            while(!a.empty() || !b.empty()) {
                if(!b.empty()) {deck.pb(b.front()); b.pop();}
                if(!a.empty()) {deck.pb(a.front()); a.pop();}
            }
        } shuffles++;
    } while(!same(deck));
    cout << shuffles << endl;
    return 0;
}