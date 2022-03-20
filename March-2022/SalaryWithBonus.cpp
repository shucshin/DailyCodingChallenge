#include <iostream>
#include <math.h>
using namespace std;
using ld = long double;

int main() {
	string name;
	ld fixed, made;
	cin >> name >> fixed >> made;
	printf("TOTAL = R$ %.2Lf\n",ceill((fixed+made*.15)*100)/100);
	return 0;
}
