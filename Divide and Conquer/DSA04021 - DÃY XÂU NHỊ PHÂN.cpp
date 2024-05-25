#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f[100];
void ktao(){
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i < 93; i++) f[i] = f[i-1] + f[i-2]; 
	// đại diện cho số lượng kí tự
}
int tinh(ll n, ll k){
	if(n == 1) return 0;
	if(n == 2) return 1;
	if(k <= f[n-2]) return tinh(n-2, k);
	else return tinh(n-1, k - f[n-2]);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >>k;
		ktao();
		cout << tinh(n,k) << endl;
	}
}