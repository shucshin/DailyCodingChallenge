#include <iostream>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int nums[n];
	int max = 0;
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
		if(nums[i] > max)
			max = nums[i];	
	}
	for(int i = 0; i < n-1; i++) {
		if(max == nums[i] && nums[i] != nums[i+1]) {
			cout << i+1 << endl;
			return;
		}
		else if(i > 0 && max == nums[i] && nums[i] != nums[i-1]) {
			cout << i+1 << endl;
			return;
		}
		else if(i == n-2 && nums[i] < nums[i+1]) {
			cout << n << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
