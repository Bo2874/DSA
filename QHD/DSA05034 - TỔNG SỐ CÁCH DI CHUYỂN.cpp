#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int dp[100001];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int i = 1; i <= n;i++){
			for(int j = 1; j <= k; j++){
				if(j <= i)
				dp[i] += dp[i - j];
				dp[i] %= mod;
			}
//			cout << dp[i] << endl;
		}
		cout << dp[n] << endl;
	}
}