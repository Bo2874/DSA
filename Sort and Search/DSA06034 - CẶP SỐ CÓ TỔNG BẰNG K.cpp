#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k ; cin >> n >> k;
		ll a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		sort(a,a+n);
		ll cnt = 0;
		for(int i = 0; i < n ; i++){
			int it1 = lower_bound(a+i+1,a+n,k-a[i]) - a;
			int it2 = upper_bound(a+i+1,a+n,k-a[i]) - a;
			cnt += it2 - it1;
		}
		cout << cnt << endl;
	}
}