#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long double r, n, p;
	cin >> r >> n >> p;
	long double ans = 0;
	for(int i = 0; i < n; i++) {
		ans += p;
		ans *= (1.0 + r);
	}
	cout << (long long)ans << endl;
	return 0;
}