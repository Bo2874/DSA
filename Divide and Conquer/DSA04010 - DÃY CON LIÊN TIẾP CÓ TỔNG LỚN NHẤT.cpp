#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int F[n+1];
		int res = -200;
		F[0] = 0;
		for(int i = 1; i <= n; i++){
			F[i] = a[i];
			F[i] = max(F[i], F[i-1] + a[i]);
			res = max(res, F[i]);
		}
		cout << res << endl;
	}
}