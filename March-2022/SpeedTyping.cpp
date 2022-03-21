#include <iostream>
using namespace std;

void solve(int c) {
	string a,p;
	cin >> a >> p;
	int j=0, ans=0;
	for(int i=0; i < p.length(); i++) {
		if(a[j] == p[i]) 
			j++;
		else
			ans++;		
	}	
	if(ans == p.length()-a.length())
		printf("Case #%d: %d\n", c, ans);
	else
		printf("Case #%d: %s\n", c, "IMPOSSIBLE");
}

int main() {
	int t, c=1;
	cin >> t;
	while(t--) {
		solve(c);
		c++;
	}
	return 0;
}
