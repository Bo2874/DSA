#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
ll luy_thua(ll a, ll b){
	if(b == 0) return 1;
	ll x = luy_thua(a, b/2);
	if(b % 2 == 0) return (x%mod)*(x%mod)%mod;
	else return ((x%mod)*(x%mod)%mod)*(a%mod)%mod;
}
int main(){
	while(true){
		ll x, y; cin >> x >> y;
		if(x == 0 && y == 0) break;
		else {
			cout << luy_thua(x,y) << endl;
		}
	}
}