#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
using psb = pair<set<int>, bool>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, k, c1, c2, up=0; cin >> n >> k;
    string p1, p2;
    map<string, psb> m;
    rep(i,0,k) {
        cin >> c1 >> c2 >> p1 >> p2;
        m[p1].first.insert(c1); // index of card into set 
        m[p2].first.insert(c2);
        if(p1 == p2 && !m[p1].second) {up++; m[p1].second = true;} // can't get points anymore
    }
    int cards = 0, certain = 0, uncertain=0;
    for(auto a : m) {
        //cout << a.first << " " << m[a.first].first.size() << endl;
        if(m[a.first].first.size() == 2) certain++;
        if(m[a.first].first.size() == 1) uncertain++;
        cards += m[a.first].first.size();
    }
    if(uncertain == n-cards) certain += uncertain;
    if(n-cards == 2 && !uncertain) certain++;
    cout << certain - up << endl;
    return 0;
}

// earth mars sun () moon sun earth ()
//   1     2   3  4   5    6    7   8
// sun is done

// moon earth () sun () mars venus moon venus sun
//  1     2   3   4  5   6    7     8     9    10
// moon is up sun is up

// moon sun earth () () earth () ()
//  1    2    3   4  5    6   7  8



