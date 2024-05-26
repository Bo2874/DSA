#include <bits/stdc++.h>
using namespace std;
#define ll long long

//*  CÁCH 2 : DÙNG 2 CON TRỎ

bool check(int a[],int n,int k){
	for(int i = 0 ; i < n ; i++){
		int l = i+1,r = n-1;
		while(l < r){
			if(a[l] + a[r] == k-a[i]) return true;
			else if(a[l] + a[r] < k-a[i]) l++;
			else r--;
		}
	}
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, k ; cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		sort(a,a+n);
		if(check(a,n,k)) cout <<"YES\n";
		else cout <<"NO\n";
	}
}