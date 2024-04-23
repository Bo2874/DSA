#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll dp[1000001];
int main(){
	int t; cin >> t;
	while(t--){
		memset(dp, 0, sizeof(dp));
		int n; cin >> n;
		int a[n+1];
		for(int i = 1; i <= n;i++) cin >> a[i];
		dp[0] = 0;
		dp[1] = a[1];
		for(int i = 2; i <= n; i++){
			dp[i] = max(dp[i-1], dp[i-2] + a[i]); // check xem nếu lấy nhà a[i] này thì có lợi hơn kh lấy kh ??
		}
		cout << dp[n] << endl;
	}
}