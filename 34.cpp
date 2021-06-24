#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int height, type;
	while(cin >> height >> type) {
		if(type == 1) {
			cout << fixed << setprecision(1) << (height - 80) * 0.7 << endl;
		} else {
			cout << fixed << setprecision(1) << (height - 70) * 0.6 << endl;
		}
	}
}