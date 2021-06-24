#include <bits/stdc++.h> 
using namespace std;
int main() {  
    int i,n;  
    cin >> n;
    for(int i = 128; i; i>>=1)  
        cout << (i & n ? "1" : "0");
	cout << "\n";    
} 