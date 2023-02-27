#include <iostream>
#include <stack>
using namespace std;
using ll = long long;
using pi = pair<int,int>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, h; cin >> n;
    stack<pi> stk;
    ll ans = 0;
    rep(i,0,n) {
        cin >> h; // height
        if(stk.empty() || stk.top().first > h) {
            stk.push({h,i}); // height is smaller so push
        }else if(stk.top().first == h) { // both are equal so we evaluate
            ans += i-stk.top().second-1; stk.pop(); stk.push({h,i});
        }else { // stk.top is smaller than h
            while(!stk.empty() && stk.top().first < h) {
                if(stk.top().first < h) stk.pop(); // pop until it's >= height
            }
            if(!stk.empty() && stk.top().first == h) { // both are equal so evaluate
                ans += i-stk.top().second-1; stk.pop();
            } stk.push({h,i}); // reset as it's the highest and should be present
        }
    }
    cout << ans << endl;
    return 0;
}