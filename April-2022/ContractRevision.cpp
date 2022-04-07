#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

int main() {
	char d;
	string n;
	int c = 0;
	cin >> d >> n;
	while(d != '0' && n != "0") {
		n.erase(remove(n.begin(), n.end(), d), n.end());
		c=0;
		while(n[c] == '0')
			n.erase(c,1);
		if(n.length() == 0) 
			cout << 0 << endl;
		else
			cout << n << endl;
		cin >> d >> n;	
	}
	return 0;
}
