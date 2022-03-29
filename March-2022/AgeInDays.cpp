#include <iostream>
using namespace std;
using ll = long long;

int main() {
	ll a, ano, mes, dia;
	cin >> a;
	ano = a/365;
	a %= 365;
	mes = a/30;
	a %= 30;
	dia = a;
	printf("%lld ano(s)\n%lld mes(es)\n%lld dia(s)\n", ano, mes, dia);
	return 0;
}
