#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    vector<vector<int> > vec;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> arr;
        int e;
        for(int j = 0; j < k; j++) {
            cin >> e;
            arr.push_back(e);
        }
        vec.push_back(arr);
    }

    int a, b;
    for(int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << vec[a][b] << endl;
    }
    return 0;
}
