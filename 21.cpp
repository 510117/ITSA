#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
	float mi = 0x3f3f3f3f;
	float mx = -0x3f3f3f3f;
	for(int i = 0; i < 10; i++) {
		float input; cin >> input;
		mi = min(input, mi);
		mx = max(input, mx);
	}
	cout << fixed << setprecision(2) << "maximum:" << mx << endl;
	cout << fixed << setprecision(2) << "minimum:" << mi << endl;
}