#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll x[100];
void ktao(){
	x[1] = 1;
	for(int i = 2; i <= 50; i++) {
		x[i] = x[i-1]*2 + 1;
	}
}
ll find(ll n, ll k){
	if(k == x[n]/2 + 1) return n;
	else if(k > x[n]/2 + 1) return find(n-1, k - x[n]/2-1);
	else  return find(n-1,k);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ktao();
		cout << find(n,k) << endl;
	}
}