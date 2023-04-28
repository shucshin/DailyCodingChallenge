#include <iostream>
#include <vector>
#include <deque>
#include <set>
using namespace std;
using vi = vector<int>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define pf push_front
const int INF = 1e9;

int main() {
    int n, k, id; cin >> n >> k;
    set<int> swch; int on = 0;
    deque<int> chat;
    rep(i,0,n) {
        cin >> id; id--;
        if(!swch.count(id)) {
            on++;
            swch.insert(id);
            chat.pf(id);
            if(on > k) {
                swch.erase(chat[k]);
                chat.pop_back();
            }
        }
    }
    cout << chat.size() << endl;
    for(auto a : chat) {
        cout << a+1 << " ";
    } cout << endl;
    return 0;
}