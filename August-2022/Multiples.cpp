#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	int A, B;
	cin >> A >> B;
	if(A > B) {
		if(A%B == 0)
			cout << "Sao Multiplos\n";
		else
			cout << "Nao sao Multiplos\n";
	}
	else if(B > A) {
		if(B%A == 0)
			cout << "Sao Multiplos\n";
		else
			cout << "Nao sao Multiplos\n";
	}
	else {
		cout << "Sao Multiplos\n";
	}
	return 0;
}
