#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		ll F[n+1];
		memset(F, 0, sizeof(F));		
		F[1] = a[1];
		for(int i = 2; i <= n; i++){
			F[i] = max(F[i-1], F[i-2] + a[i]);
// 			tìm TỔNG LỚN NHẤT CỦA DÃY CON KHÔNG KỀ NHAU tại vị trí i
		}
		cout << F[n] << endl;
	}
}