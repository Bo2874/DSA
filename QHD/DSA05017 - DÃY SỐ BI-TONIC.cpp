#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int F1[n], F2[n];
		for(int i = 0; i < n; i++){
			F1[i] = a[i];
			for(int j = 0; j < i; j++){
				if(a[j] < a[i]){
					F1[i] = max(F1[i], F1[j] + a[i]);
				}
			}
		}
		for(int i = n-1; i >= 0; i--){
			F2[i] = a[i];
			for(int j = i+1; j < n; j++){
				if(a[j] < a[i]){
					F2[i] = max(F2[i], F2[j] + a[i]);
				}
			}
//			cout << F2[i] <<" ";
		}
		int res = 0;
		for(int i = 0; i < n ; i++){
			res = max(res, F1[i] + F2[i] - a[i]);
		}
		cout << res << endl;
	}
}