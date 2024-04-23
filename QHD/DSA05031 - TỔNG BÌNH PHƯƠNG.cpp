#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll F[n+1];
//		memset(F, 1, sizeof(F));
		F[0] = 0;
		for(int i = 1; i <= n; i++){
			F[i] = i;
			for(int j = 1; j <= sqrt(i); j++){
				F[i] = min(F[i], F[i - j*j] + 1); // +1 chinh la j*j
			}
		}
		cout << F[n] <<endl;
	}
}