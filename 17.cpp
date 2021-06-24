#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	map<string, bool> exist;
	bool first = 1;
	while(cin >> s) {
		for(auto &c : s) {
			c = tolower(c);
		}
		if(!exist[s]){
			if(first) first = 0;
			else cout << " ";
			cout << s;
			exist[s] = true;
		} 
	}
	cout << endl;
	return 0;
}