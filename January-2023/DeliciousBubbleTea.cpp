#include <iostream>
#include <vector>
#include <climits>
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb(a) push_back(a);
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int minPrice = INT_MAX;
    int n, m, k, a; 
    cin >> n; vi tea(n);
    rep(i,0,n) cin >> tea[i];
    cin >> m; vi toppings(m);
    rep(i,0,m) cin >> toppings[i];
    rep(i,0,n) {
        cin >> k;
        rep(j,0,k) {
            cin >> a;
            minPrice = min(minPrice, tea[i]+toppings[a-1]);
        }
    }
    int money; cin >> money;
    int students = money/minPrice-1;
    cout << (students < 0 ? 0 : students) << endl;
    return 0;
}