#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int r;
	if(a == b)
		r = 24;
	else if(a > b)
		r = (24-a) + b;
	else
		r = b-a;
	printf("O JOGO DUROU %d HORA(S)\n", r);	
	return 0;
}
