#include <iostream>
using namespace std;
typedef double d;

int main() {
	d salary;
	cin >> salary;
	if(salary <= 2000.00)
		cout << "Isento\n";
	else if(salary <= 3000.00)
		printf("R$ %.2f\n", (salary-2000.00)*0.08);
	else if(salary <= 4500.00)
		printf("R$ %.2f\n", 80 + (salary-3000.00)*0.18);
	else
		printf("R$ %.2f\n", 80 + 270 + (salary-4500.00)*0.28);
	return 0;
}
