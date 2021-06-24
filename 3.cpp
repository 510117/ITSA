#include <bits/stdc++.h>
using namespace std;
int main() {
	int x, y;
	while(cin >> x >> y) {
		if(x * x + y * y <= 100 * 100) {
			cout << "inside\n";
		} else {
			cout << "outside\n";
		}
	}
}