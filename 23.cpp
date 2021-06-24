#include <iostream>
#include <cstdio>
using namespace std;
int coin[3] = {1, 5, 50};
int ans[3];
int main() {
	string s;
	cin >> s;
	int n, a1, a2, a3;
	sscanf(s.c_str(), "%d,%d,%d,%d", &n, &a1, &a2, &a3);
	n -= (15 * a1 + 20 * a2 + 30 * a3);
	if(n < 0) {
		cout << "0\n";
		exit(0);
	}
	
	for(int i = 2; i >= 0; i--) {
		ans[i] = (n / coin[i]);
		n %= coin[i]; 
	}

	cout << ans[0] << "," << ans[1] << "," << ans[2] << endl;
	return 0;
}