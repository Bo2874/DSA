#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n ; i++) cin >> a[i];
		sort(a,a+n);
		int kc_min = 1e9;
		for(int i = 1; i < n ; i++){
			if(a[i] - a[i-1] < kc_min){
				kc_min = a[i] - a[i-1];
			}
		}
		cout << kc_min << endl;
	}
}