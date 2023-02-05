#include <iostream>
#include <vector>
#include <stack>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve(int t) {
    stack<string> deck, hand;
    string card;
    rep(i,0,52) {
        cin >> card;
        deck.push(card);
    }
    // take 25 cards of the pile in the hand
    rep(i,0,25) {hand.push(deck.top()); deck.pop();}
    int y = 0;
    // take top card of the deck and determine value
    rep(i,0,3) {
        string s = deck.top(); deck.pop();
        int x = (isdigit(s[0]) ? (int)s[0]-'0' : 10); y += x;
        rep(i,0,(10-x)) deck.pop();
    }
    while(!hand.empty()) {
        deck.push(hand.top()); hand.pop();
    }
    vector<string> pile;
    while(!deck.empty()) {
        pile.insert(pile.begin(), deck.top()); deck.pop();
    }
    card = pile[y-1];
    printf("Case %d: %s\n", t, card.c_str());
}

int main() {
    int t; cin >> t;
    rep(i,1,t+1) solve(i);
    return 0;
}