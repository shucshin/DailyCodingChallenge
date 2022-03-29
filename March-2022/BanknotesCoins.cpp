#include <iostream>
#include <cmath>
using namespace std;
using ld = long double;

int main() {
	ld n;
       	int hundred, fifty, twenty, ten, five, two, one, pfifty, ptwentyfive, pten, pfive, pone;
	cin >> n;
	int a = (int)(n*100);
	hundred = a/10000;
	a %= 10000;
	fifty = a/5000;
	a %= 5000;
	twenty = a/2000;
	a %= 2000;
	ten = a/1000;
	a %= 1000;
	five = a/500;
	a %= 500;
	two = a/200;
	a %= 200;
	
	one = a/100;
	a %= 100;
	pfifty = a/50;
	a %= 50;
	ptwentyfive = a/25;
	a %= 25;
	pten = a/10;
	a %= 10;
	pfive = a/5;
	a %= 5;
	pone = a;
	
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", hundred, fifty, twenty, ten, five, two, one, pfifty, ptwentyfive, pten, pfive, pone);
	return 0;
}
