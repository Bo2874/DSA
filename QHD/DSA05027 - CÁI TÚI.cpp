#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n, v; cin >> n >> v;
		int a[n+1], b[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++) cin >> b[i];
		int dp[n+1][v+1];
		memset(dp, 0, sizeof(dp));
//		xét xem tại đồ thứ i và có thể tích j thì nhét được giá trị lớn nhất là bao nhiêu
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= v; j++){
				dp[i][j] = dp[i-1][j]; // khong cho do vat vao tui
				// được phép cho nhưng thà không cho còn hơn (check tại lần so sánh đầu tiên)
				if(a[i] <= j){
					dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + b[i]);
					// cho duoc do vat vao tui
				}	
			}
		}
		cout << dp[n][v] << endl;
	}
}