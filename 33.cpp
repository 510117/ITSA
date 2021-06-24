#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
	string s;
	while(getline(cin, s)) {
		stringstream ss;
		ss << s;
		int n = 0;
		int num;
		double sum = 0;
		while(ss >> num) {
			n++;
			sum += num;
		}
		cout << "Size: " << n << endl;
		cout << fixed << setprecision(3) << "Average: " << sum / n << endl;
	}
	return 0;
}