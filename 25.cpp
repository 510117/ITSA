#include <iostream>
#include <string>
using namespace std;
int main() {
	int t; cin >> t;
	string empty;
	getline(cin, empty);
	while(t--) {
		string s; getline(cin, s);
		int ans = 0;
		for(auto c : s) {
			if(c == ' ') ans += c;
			else if(isspace(c)) continue;
			else ans += c;
		}
		cout << ans << endl;
	}
	return 0;
}