#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll BS(ll a[], ll l, ll r, ll k){
	while(l <= r){
		ll m = (l+r)/2;
		if(a[m] == k) return m;
		else if(a[m] < k){
			l = m+1;
		}
		else r = m-1;	
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ll a[n];
		for(ll i = 0; i < n; i++) cin >> a[i];
		if(BS(a, 0, n-1, k) != -1) cout << BS(a, 0, n-1, k)+1;
		else cout <<"NO";
		cout << endl;
	}
}