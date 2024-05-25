#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;

ll luy_thua(ll a, ll b){
	if(b == 0) return 1;
	ll res = luy_thua(a,b/2);
	if(b % 2 == 0) return res%mod * res%mod;
	else return res%mod * res%mod%mod % mod % mod * a %mod % mod;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a = n, b = 0;
		while(n){
			int r = n%10;
			b += r;
			n /= 10;
			if(n > 0) b *= 10;
		}
		cout << luy_thua(a,b);
		cout << endl;
	}
}