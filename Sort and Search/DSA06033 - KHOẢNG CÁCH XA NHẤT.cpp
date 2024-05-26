#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		int RMax[n], LMin[n];
		RMax[n-1] = a[n-1];
		for(int i = n-2 ; i >= 0 ; i--){
			RMax[i] = max(RMax[i+1],a[i]);
		}
		LMin[0] = a[0];
		for(int i = 1 ; i < n ;i++){
			LMin[i] = min(LMin[i-1],a[i]);
		}
		int kc_max = -1;
		int i = 0, j = 0;
		while(i < n && j < n){
			if(RMax[j] > LMin[i]){
				kc_max = max(kc_max,j-i);
				j++;
			}
			else i++;
		}
		cout << kc_max << endl;
	}
}