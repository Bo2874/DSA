#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;

struct matrix{
	ll a[2][2];
	friend matrix operator * (matrix x, matrix y){ // Nạp chồng hàm nhân 2 ma trận
		matrix kq;
		for(int i = 0; i < 2; i++){
			for(int j = 0; j < 2; j++){
				kq.a[i][j] = 0; // do ban đầu khởi tạo trong mảng a có 1 nên phải đưa về 0
				for(int k = 0; k < 2; k++){
					kq.a[i][j] += x.a[i][k] * y.a[k][j];
					kq.a[i][j] %= mod;
				}
			}
		}
		return kq;
	}
};
matrix luy_thua(matrix a, int n){ // lý thuyết ngta nghiên cứu là thế
	if(n == 1) return a;
	matrix kq = luy_thua(a,n/2);
	if(n % 2 == 0) return kq*kq;
	else return kq*kq*a;
// 	sử dụng cấu trúc ma trận đã tạo ở trên để nhân
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		matrix X;
		X.a[0][0] = 1; X.a[0][1] = 1;
		X.a[1][0] = 1; X.a[1][1] = 0;
		matrix Y = luy_thua(X,n);
		cout << Y.a[0][1] << endl;
	}
}