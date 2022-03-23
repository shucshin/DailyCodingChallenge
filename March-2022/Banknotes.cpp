#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	ll hundred, fifty, twenty, ten, five, two, one;
	ll original = n;

	hundred = n/100;
	n %= 100;
	
	fifty = n/50;
	n %= 50;
	
	twenty = n/20;
	n %= 20;

	ten = n/10;
	n %= 10;
		
	five = n/5;
	n %= 5;
	
	two = n/2;
	n %= 2;
		
	one = n/1;
	
	cout << original << endl;
	cout << hundred << " nota(s) de R$ 100,00\n";
	cout << fifty << " nota(s) de R$ 50,00\n";
	cout << twenty << " nota(s) de R$ 20,00\n";
	cout << ten << " nota(s) de R$ 10,00\n";
	cout << five << " nota(s) de R$ 5,00\n";
	cout << two << " nota(s) de R$ 2,00\n";
	cout << one << " nota(s) de R$ 1,00\n";
	return 0;
}
