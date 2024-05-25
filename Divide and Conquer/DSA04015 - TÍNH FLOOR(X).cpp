#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		if(x > a[n-1]){
			cout << n << endl;
			continue;
		}
		int tmp = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				tmp = i+1;
				break;
			}
			if(a[i] > x) {
				tmp = i;
				break;
			}
		}
		if(tmp == 0) cout << -1 << endl;
		else cout << tmp << endl;
	}
}