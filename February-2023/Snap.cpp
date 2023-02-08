#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

void solve(int t) {
    int c = 0; char x, y;
    string jane, john; cin >> jane >> john;
    //getline(cin, z); getline(cin, jane); getline(cin, john);
    queue<char> janeDown, johnDown;
    vector<char> janeUp, johnUp;
    rep(i,0,jane.length()) janeDown.push(jane[i]);
    rep(i,0,john.length()) johnDown.push(john[i]);
    while(c < 1000 && !(janeDown.empty() && !janeUp.size()) && !(johnDown.empty() && !johnUp.size())) {
        x = janeDown.front(); janeDown.pop(); y = johnDown.front(); johnDown.pop();
        janeUp.pb(x); johnUp.pb(y); 
        if(x == y) {
            int r = random()/141%2;
            string s = "", t = "";
            if(!r) { // Jane Wins
                s = "Jane";
                // takes other player's face-up pile and places it onto top of hers
                rep(i,0,johnUp.size()) {janeUp.pb(johnUp[i]);} johnUp.clear();
                for(int i = janeUp.size()-1; i >= 0; i--) t += janeUp[i];
            }
            else { // John Wins
                s = "John";
                // takes other player's face-up pile and places it onto top of his
                rep(i,0,janeUp.size()) {johnUp.pb(janeUp[i]);} janeUp.clear();
                for(int i = johnUp.size()-1; i >= 0; i--) t += johnUp[i];
            }
            printf("Snap! for %s: %s\n", s.c_str(), t.c_str());
        } c++;
        if(janeDown.empty()) { // face-up pile turned over to become face-down pile
            rep(i,0,janeUp.size()) {janeDown.push(janeUp[i]);} janeUp.clear();}
        if(johnDown.empty()) { // face-up pile turned over to become face-down pile
            rep(i,0,johnUp.size()) {johnDown.push(johnUp[i]);} johnUp.clear();}
    }
    if(janeDown.empty() && !janeUp.size()) printf("John wins.\n");
    else if(johnDown.empty() && !johnUp.size()) printf("Jane wins.\n");
    else printf("Keeps going and going ...\n");
    if(t != 0) cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve(t);
    return 0;
}