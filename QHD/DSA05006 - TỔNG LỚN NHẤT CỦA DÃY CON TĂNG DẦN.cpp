#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int F[n];
		for(int i = 0; i < n; i++){
			F[i] = a[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < i; j++){
				if(a[j] < a[i]){
					F[i] = max(F[i], F[j] + a[i]);
				}
			}
		}
		cout << *max_element (F, F+n) << endl;
	}
}