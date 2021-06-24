#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int matrix[N][N];
int main() {
	int n, m;
	while(cin >> n >> m) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> matrix[i][j];
			}
		}
		for(int j = 0; j < m; j++) {
			for(int i = 0; i < n; i++) {
				cout << matrix[i][j];
				if(i != n - 1) cout << " ";
			}
			cout << "\n";
		}
	}
}