#include <iostream>
using namespace std;

int solution(int n) {
    int ans = 1;
    for(int i = 1; i < n; i++) 
        ans += i*4;
    return ans;
}

int main() {
	cout << solution(5) << endl;
	return 0;
}
