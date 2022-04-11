#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	string s = to_string(n);
	bool yn = true;
	if(s.length() < 3) {
		if(s == "1" || s == "14") {
			cout << "YES\n";
			exit(EXIT_SUCCESS);
		}
	}	

	if((s[s.length()-1] != '1' && s[s.length()-1] != '4') || (s[s.length()-2] != '1' && s[s.length()-2] != '4')) 
		yn = false;
	for(int i = 0; i < s.length()-2; i++) {
		if(s[0] != '1') {
			yn = false;
			break;
		}
		if(s[i] != '1' && s[i] != '4') {
			yn = false;
			break;
		}
		if(s[i] == '4' && s[i+1] == '4' && s[i+2] == '4') {
			yn = false;
			break;
		}
	}
	if(yn)
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}
