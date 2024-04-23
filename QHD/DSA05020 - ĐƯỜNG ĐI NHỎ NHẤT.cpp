#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n+1][m+1];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++) cin >> a[i][j];
		}
		int dp[n+1][m+1];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++) dp[i][1] = dp[i-1][1] + a[i][1];
		for(int j = 1; j <= m; j++) dp[1][j] = dp[1][j-1] + a[1][j];
		for(int i = 2; i <= n; i++){
			for(int j = 2; j <= m; j++){
				dp[i][j] = min({dp[i][j-1], dp[i-1][j-1], dp[i-1][j]});
				dp[i][j] += a[i][j];
			}
		}
		cout << dp[n][m] << endl;
	}
}