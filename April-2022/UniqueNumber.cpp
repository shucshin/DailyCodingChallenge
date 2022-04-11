#include <iostream>
#include <list>
#include <sstream>
#include <iterator>
using namespace std;

void solve() {
	int x;
	cin >> x;
	if(x < 10) {
		cout << x << endl;
		return;
	}
	else if(x > 45) {
		cout << -1 << endl;
		return;
	}
	list<int> l;
	for(int i = 9; i > 0; i--) {
		if(i >= x) {
			l.push_front(x);		
			break;
		}
		l.push_front(i);
		x -= i;
	}
	for(list<int>::iterator it=l.begin(); it != l.end(); ++it)
		cout << *it;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--)
		solve();	
	return 0;
}
