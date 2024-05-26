#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		for(int i = 1 ; i < n ; i++){
			a[i] = a[i] + a[i-1];
		}
		int ok = 1;
		for(int i = 1 ; i < n-1 ; i++){
			if(a[n-1] - a[i] + b[i] == a[i]){
				cout << i+1 <<endl;
				ok = 0;
				break;
			}
		}
		if(ok) cout <<"-1\n";
	}
}