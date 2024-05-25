#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
struct matrix{
	ll a[2][2];
	friend matrix operator * (matrix x, matrix y){
		matrix res;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				res.a[i][j] = 0;
				for(int k = 0; k < 2; k++){
					res.a[i][j] += x.a[i][k] * y.a[k][j];
					res.a[i][j] %= mod; 
				}
			}
		}
		return res;
	}
};
matrix powmod(matrix a, int n){
	if(n == 1) return a;
	matrix x = powmod(a, n/2);
	if(n%2 == 0) return x*x;
	else return x*x*a;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		matrix u;
		u.a[0][0] = u.a[0][1] = u.a[1][0] = 1;
		u.a[1][1] = 0;
		matrix res = powmod(u, n);
		cout << res.a[0][1] << endl;
	}
}