#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, mod = 1e9 + 7;
struct matrix{
	ll a[10][10];
	friend matrix operator * (matrix x, matrix y){
		matrix kq;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				kq.a[i][j] = 0;
				for(int k = 0; k < n; k++){
					kq.a[i][j] += x.a[i][k]*y.a[k][j];
					kq.a[i][j] %= mod;
				}
			}
		}
		return kq;
	}
};
matrix luy_thua(matrix a, ll k){
	if(k == 1) return a;
	matrix kq = luy_thua(a,k/2);
	if(k % 2 == 0) return kq*kq;
	else return kq*kq*a;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll k;
		cin >> n >> k;
		matrix x;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++) cin >> x.a[i][j];
		}
		matrix y = luy_thua(x,k);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n;j++) cout << y.a[i][j] << " ";
			cout << endl;
		}
	}
}