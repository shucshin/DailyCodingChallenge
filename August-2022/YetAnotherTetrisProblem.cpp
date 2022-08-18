#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> vi;

void solve() {
	int n;
	cin >> n;
	vi nums;
	int a;
	for(int i = 0; i < n; i++) {
		cin >> a;
		nums.push_back(a);
	}
	sort(nums.begin(), nums.end(), greater<int>());
       	for(int i = 0; i < n-1; i++) {
		if(abs(nums[i]-nums[i+1])%2 != 0) {
			cout << "NO\n";
			return;
		}
	}	
	cout << "YES\n";
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}
