#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	ll hours, minutes, seconds;
	hours = n/3600;
	n %= 3600;
	minutes = n/60;
	n %= 60;
	seconds = n;
	cout << hours << ":" << minutes << ":" << seconds << endl;
	return 0;
}
