#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(int a[], int n, int k){
	for(int i = 1; i <= n; i++){
		if(a[i] <= k) return true;
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		int a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		if(!check(a, n, k)) {
			cout << "NO" << endl;
			continue;
		}
		ll sum = 0, ok = 0, tmp = 1;
		for(int i = 1; i <= n; i++){
			sum += a[i];
			while(sum > k){
				sum -= a[tmp];
				tmp++;
			}
			if( sum == k){
				ok = 1;
				break;
			}
		}
		if(ok) cout <<"YES";
		else cout <<"NO";
		cout << endl;
	}
}