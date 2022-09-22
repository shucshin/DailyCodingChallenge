#include <iostream>
#include <queue>
using namespace std;
using pq = priority_queue<int>;
using pqd = priority_queue<int, vector<int>, greater<int> >;
int main() {
    int n;
    cin >> n;
    pqd evens;
    pq odds;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a%2 == 0)
            evens.push(a);
        else
            odds.push(a);
    }
    while(!evens.empty()) {
        cout << evens.top() << endl;
        evens.pop();
    }
    while(!odds.empty()) {
        cout << odds.top() << endl;
        odds.pop();
    }
    return 0;
}