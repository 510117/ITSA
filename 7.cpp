#include <bits/stdc++.h>
using namespace std;
class Complex {
public :
	int real, imag;
	Complex operator + (const Complex a) {
		Complex res;
		res.real = (real + a.real);
		res.imag = (imag + a.imag);
		return res;
	}
	Complex operator - (const Complex a) {
		Complex res;
		res.real = (real - a.real);
		res.imag = (imag - a.imag);
		return res;
	}
	Complex operator * (const Complex a) {
		Complex res;
		res.real = (real * a.real - imag * a.imag);
		res.imag = (imag * a.real + real * a.imag);
		return res;
	}
	Complex(int _real, int _imag) : real(_real), imag(_imag) {}
	Complex(){}
};
int main() {
	int t;
	cin >> t;
	while(t--) {
		char ope;
		Complex c1, c2;
		cin >> ope >> c1.real >> c1.imag >> c2.real >> c2.imag;
		Complex res;
		if(ope == '+') res = c1 + c2;
		else if(ope == '-') res = c1 - c2;
		else if(ope == '*') res = c1 * c2;
		cout << res.real << " " << res.imag << endl;
	}
}