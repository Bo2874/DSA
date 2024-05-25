#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[k+1];
		map <int,int> mp;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			mp[a[i]] = 1;
		}
		int dem = 0;
		int u = k;
		while(a[u] == n + u - k) u--;
		a[u]++;
		if(u != 0){
			for(int j = u + 1; j <= k; j++) a[j] = a[j-1]+1;
			for(int i = 1; i <= k; i++){
				if(mp[a[i]] == 0) dem++;
			}
			cout << dem;
		}
		else cout << k;
		cout << endl;
	}
}