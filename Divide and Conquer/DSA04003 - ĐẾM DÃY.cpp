#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 123456789;
ll powMod(ll a, ll b){
	if(b == 0) return 1;
	ll x = powMod(a, b/2);
	if(b % 2 == 0) return (x%mod)*(x%mod)%mod;
	else return ((x%mod)*(x%mod)%mod)*(a%mod)%mod; 
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		cout << powMod(2, n-1) << endl;
	// Dựa vào công thức tính bài toán chia kẹo ( n+k-1 C k-1 ) (với xi >=0 )
//	ta sẽ tính tổng tất cả các cách mà tạo nên dãy có số lượng bằng 1 -> n (mỗi phần tử trong dãy bất kì luôn >= 1 để nó đúng với số lượng mà mỗi lần xét 1 dãy, nếu 
//lấy >= 0 ta sẽ bị lấy lặp trường hợp vd: x1 + x2 + x3 = 6 và x1 + x2 + x3 + x4 = 6 -> ta sẽ xét TH x1=x2=3 và x3 = 0,x4 = 0 lúc này nó sẽ bị tính 2 dãy 3 3 0 và 3 3 0 0)
//	vd : n = 6
//	x1 = 6 biến đổi để dùng cthuc y1 = 6-1 -> 5+1-1 C 1-1 = 5 C 0 (đặt yi = xi - 1) (xi >= 1 -> yi >= 0)
//	x1 + x2 = 6 biến đổi để dùng cthuc y1 + y2 = 6-2 -> 4+2-1 C 2-1 = 5 C 1
//	....
//	x1 + x2 + ... +x6 biến đổi y1 + y2 + y3 + y4 + y5 + y6 = 6-6 -> 0+6-1 C 6-1 = 5 C 5
//	-> số lượng các dãy tạo thành tổng = 6 là: 5 C 0 + ... 5 C 5
//	-> số lượng các dãy tạo thành tổng = n là: (n-1 C 0) + (n-1 C 1) + ... + (n-1 C n-1) = pow(2, n-1) -> cthuc nó thế !!!
	}
}