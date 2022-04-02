#include <iostream>
#include <cmath>
using namespace std;
using ld = long double;

void solve(ld A, ld B, ld C) {
	ld sq = pow(B,2) - 4*A*C;
	if(sq < 0 || A==0) {
		cout << "Impossivel calcular\n";
		return;
	}
	ld R1 = (-B+sqrt(sq))/(2*A);
	ld R2 = (-B-sqrt(sq))/(2*A);	
	printf("R1 = %0.5Lf\nR2 = %0.5Lf\n", R1, R2);
}

int main() {
	ld A,B,C;
	cin >> A >> B >> C;
	solve(A,B,C);
	return 0;
}
