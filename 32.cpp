#include <iostream>
#include <string>
using namespace std;
int main() {
	string line;
	getline(cin, line);
	int d; cin >> d;
	for(auto c : line) {
		if(isalpha(c)) {
			char res = (c + d);
			if(!isalpha(res)) res -= 26;
			cout << res;
		} else if(isdigit(c)) {
			char res = (c + d);
			if(!isdigit(res)) res -= 10;
			cout << res;
		}
		else cout << c;
	}
	cout << endl;
	return 0;
}