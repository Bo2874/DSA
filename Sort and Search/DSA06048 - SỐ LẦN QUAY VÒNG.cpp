#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(int i = 0; i < n ; i++) cin >> a[i];
		int tmp = 0;
		for(int i = 0 ; i < n-1 ; i++){
			if(a[i] > a[i+1]) tmp = i+1;
		}
		cout << tmp << endl;
	}
}