#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, s, m; cin >> n >> s >> m;
		int tong = s*m;
		int mua_duoc = n*(s - s/7);
		if(mua_duoc < tong) cout << -1 << endl;
		else {
			if(tong % n == 0) cout << tong/n << endl;
			else cout << tong/n + 1 <<endl;
		}
	}
}