#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int n = 0;
	map<char, int> cnt;

	bool space = 1;
	for(auto c : s) {
		if(isspace(c)) space = 1;
		else if(isalpha(c)) {
			if(space) {
				space = 0;
				n++;
			}
			c = tolower(c);
			cnt[c]++;
		}
	}
	cout << n << endl;
	for(auto P : cnt) {
		cout << P.first << " : " << P.second << endl;
	}
	return 0;
}