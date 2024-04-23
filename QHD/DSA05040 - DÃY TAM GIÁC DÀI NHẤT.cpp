#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1], b[n+1];
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		reverse(b + 1, b+n+1);
		int F1[100001];
		int F2[100001];
		F1[1] = 1;
		F2[1] = 1;
		for(int i = 2; i <= n; i++){
			F1[i] = 1;
			F2[i] = 1;
			if(a[i] > a[i-1]) F1[i] = F1[i-1]+1;
			if(b[i] > b[i-1]) F2[i] = F2[i-1]+1;
// 			xây mảng tăng dần xuôi và ngược 
		}
		int res = 0;
		for(int i = 1; i <= n; i++){
			res = max(res, F1[i]+F2[n-i+1]-1); // trừ đi 1 phần tử chung
		}
		cout << res << endl;
	}
}