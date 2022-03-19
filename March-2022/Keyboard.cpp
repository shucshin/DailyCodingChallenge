#include <iostream>
#include <string.h>
using namespace std;
using ll = long long;

int main() {
	string lr, s;
	cin >> lr >> s;
	string line = "qwertyuiopasdfghjkl;zxcvbnm,./";
	for(int i = 0; i < s.length(); i++) {
		if(lr == "R") {
			int j = line.find(s[i]);
			if(s[i] == 'q' || s[i] == 'a' || s[i] == 'z') {
				s[i] = line[j+1];
				continue;
			}
			s[i] = line[j-1];
		}
		if(lr == "L") {
			int j = line.find(s[i]);
			if(s[i] == 'p' || s[i] == ';' || s[i] == '/') {
				s[i] = line[j-1];
				continue;
			}
			s[i] = line[j+1];
		}
	}
	cout << s << endl;
	return 0;
}
