#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s1;
	while(cin >> s1) {
		string s2 = s1;
		reverse(s2.begin(), s2.end());
		if(s1 == s2) cout << "YES\n";
		else cout << "NO\n";
	}
}