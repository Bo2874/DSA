#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[k+1];
		for(int i = 1; i <= k; i++) cin >> a[i];
		int tmp = 0;
		for(int i = k ; i >= 1 ; i--){
			if(a[i] != n-k+i){
				tmp = i;
				break;
			}
		}
		if(tmp == 0){
			for(int i = 1 ; i <= k ; i++) cout <<i<<" ";
		}
		else {
			a[tmp]++;
			for(int i = tmp+1 ; i <= k ; i++) a[i] = a[i-1] + 1;
			for(int i = 1 ; i <= k ; i++) cout << a[i] <<" ";
		}
		cout << endl;
	}
}