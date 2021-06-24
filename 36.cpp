#include <iostream>
using namespace std;
int main() {
	int year;
	while(cin >> year) {
		if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) cout << "Bissextile Year\n";
		else cout << "Common Year\n";
	}
	return 0;
}