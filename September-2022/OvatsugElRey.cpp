#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;

int main() {
    int n, t, a;
    cin >> n >> t;
    vi nums;
    int d = t%n;
    for(int i=0; i<d; i++) {
        cin >> a;
        nums.push_back(a);
    }
    for(int i=0; i<n-d; i++) {
        cin >> a;
        cout << a << " ";
    }
    for(int i=0; i<d; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}