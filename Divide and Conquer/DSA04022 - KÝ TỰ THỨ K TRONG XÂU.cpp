#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100];
void ktao(){
	a[1] = 1;
	for(int i = 1; i <= 25; i++) a[i] = a[i-1]*2 + 1;
}
char find(ll n, ll k){
	if(k == a[n]/2 + 1) return (char)('A' + n - 1);
	else if(k > a[n]/2 + 1) return find(n-1, k - a[n]/2 - 1);
	else return find(n-1, k);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ktao();
		cout << find(n,k) << endl;
	}
}