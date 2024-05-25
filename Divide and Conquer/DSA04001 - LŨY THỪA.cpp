#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;
long long pow_mod(int a, int b){
	if(b == 0) return 1;
	long long x = pow_mod(a, b/2);
	if(b % 2 == 0) return (x%mod)*(x%mod)%mod;
	else return (x%mod)*(x%mod)%mod*a%mod;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		cout << pow_mod(n,k) << endl;
	}
}