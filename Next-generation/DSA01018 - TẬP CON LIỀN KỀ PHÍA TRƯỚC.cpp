#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[k+1];
		for(int i = 1; i <= k; i++) cin >> a[i];
		int ok = 0;
		for(int i = 1; i <= k; i++){
			if(a[i] != i) ok = 1;
		}
		if(!ok){
			for(int i = n-k+1; i <= n; i++){
				cout << i <<" ";
			}
		}
		else{
			int tmp = 1;
			for(int i = k; i > 1; i--){
				if(a[i] - 1 != a[i-1]){
					tmp = i;
					break;
				}
			}
			a[tmp]--;
			for(int i = tmp + 1; i <= k; i++){
				a[i] = n-k+i;
			}
			for(int i = 1; i <= k; i++) cout << a[i] <<" ";
		}
		cout << endl;
	}
}