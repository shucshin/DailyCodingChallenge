#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll A,B,C,D;
	cin >> A >> B >> C >> D;
	if(B > C && D > A && C+D > A+B && C > 0 && D > 0 && A%2 == 0)
		cout << "Valores aceitos\n";
	else
		cout << "Valores nao aceitos\n";
	return 0;
}