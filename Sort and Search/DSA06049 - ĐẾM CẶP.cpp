#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a+n);
		ll cnt = 0;
		int l = 0;
		for(int r = 0; r < n; r++){
			while(a[r] - a[l] >= k) l++;
			cnt += r-l;
		}
		// O(n + n)
		cout << cnt << endl;
	}
}