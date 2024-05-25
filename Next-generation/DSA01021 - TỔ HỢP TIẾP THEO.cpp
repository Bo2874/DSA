#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n, k ; cin >> n >> k;
		int a[k+1];
		map <int,int> mp;
		for(int i = 1 ; i <= k ; i++){
			cin >> a[i];
			mp[a[i]] = 1;
		}
		int i = k;
		while(a[i] == n-k+i){
			i--;
		}
		if(i != 0){
			a[i]++;
			for(int j = i+1; j <= k ; j++) a[j] = a[j-1]+1;
			int cnt = 0;
			for(int i = 1; i <= k ; i++){
				if(mp[a[i]] != 1) cnt++;
			}
			cout << cnt << endl;
		}
		else cout << k << endl;
	}
}