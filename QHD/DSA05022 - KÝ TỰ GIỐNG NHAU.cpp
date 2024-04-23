#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n, x, y, z; cin >> n >> x >> y >> z;
		int F[n+1];
		F[1] = x;
		for(int i = 2; i <= n; i++){
			if(i % 2 == 0) F[i] = min(F[i-1] + x, F[i/2] + z);
			else F[i] = min(F[i-1] + x, F[(i+1)/2] + y + z);
		}
		cout << F[n] << endl;
	}
}