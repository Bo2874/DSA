#include <bits/stdc++.h>
using namespace std;
#define ll long long

int bac(ll n){
	ll res = 1;
	int cnt = 0;
	while(res <= n){
		res *= 2;
		cnt++;
	}
	return cnt - 1;
}
ll pow2[51];
ll find(ll n, int b, ll k){
	ll x = pow2[b];
	if(k == x) return n%2;
	if(k > x) return find(n/2, b-1, k - x);
	return find(n/2, b-1, k);
	//hàm find sẽ chạy dần đến bậc cuối cùng, giá trị sẽ là 0 hoặc 1
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, l , r; cin >> n >> l >> r;
		int b = bac(n);
		pow2[0] = 1;
		for(int i = 1; i <= 50; i++) pow2[i] = pow2[i-1] * 2;
		ll dem = 0;
		for(ll i = l ; i <= r; i++){
			dem += find(n, b, i);
		}
		cout << dem << endl;
	}
}