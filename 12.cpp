#include <iostream>
using namespace std;
int f(int n) {
	if(n == 0 || n == 1) return n + 1;
	return f(n - 1) + f(n / 2);
}
int main() {
	int k;
	cin >> k;
	cout << f(k) << endl;
	return 0;
}