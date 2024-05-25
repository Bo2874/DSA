#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100],final = 0;
void init(){
	for(int i = 1; i <= k ; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(a[i] == n-k+i) i--;
	if(i == 0) final = 1;
	else{
		a[i]++;
		for(int j = i+1 ; j <= k ; j++) a[j] = a[j-1] + 1;
	}
}
bool check(int b[],int k){
	for(int i = 1 ; i <= k; i++) {
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		final = 0;
		cin >> n >> k;
		int b[k+1];
		for(int i = 1 ; i <= k ; i++) cin >> b[i];
		int cnt = 0, res;
		init();
		while(!final){
			cnt++;
			if(check(b,k)) res = cnt;
			sinh();
		}
		cout << res <<endl;
	}
}