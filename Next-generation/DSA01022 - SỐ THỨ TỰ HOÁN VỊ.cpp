#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,a[100], final = 0;
void init(){
	for(int i = 1; i <= n; i++) a[i] = i;
}
void sinh(){
	int i = n-1;
	while(a[i] > a[i+1] && i >= 1) i--;
	if(i == 0) final = 1;
	else {
		int j = n;
		while(a[j] < a[i]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
bool check(int b[],int n){
	for(int i = 1 ; i <= n ; i++) {
		if(a[i] != b[i]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		final = 0;
		cin >> n;
		int b[n+1];
		for(int i = 1; i <= n ; i++) cin >> b[i];
		int cnt = 0,res;
		init();
		while(!final){
			cnt++;
			if(check(b,n)) res = cnt;
			sinh();
		}
		cout << res << endl;
	}
}