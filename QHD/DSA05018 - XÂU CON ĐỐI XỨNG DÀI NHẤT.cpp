#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];

int main(){
	int t; cin >> t;
	while(t--){	
		
		string s; cin >> s;
		s = " " + s;
		int n = s.size();
		for(int i = 1; i <= n; i++){
			// TH len = 1
			dp[i][i] = 1; // do len = 1 nên luôn đối xứng
			// TH len = 2
			if(i+1 < n){
				if(s[i] == s[i+1]) dp[i][i+1] = 1;
				else dp[i][i+1] = 0;
			}
		}
		//XÂY DỰNG TỪ NHỮNG XÂU CON NHỎ NHẤT, CHỈ LẤY NỬA TRÊN CỦA MA TRẬN ( DO LEN CỦA XÂU LÀ TỪ I ĐẾN J, I <= J)
		for(int len = 3; len <= n; len++){
			//duyệt các chỉ số bắt đầu của xâu có độ dài là len
			for(int i = 1; i <= n-len+1 ; i++){
				int j = i + len-1;
				if(s[i] == s[j] && dp[i+1][j-1]){
					dp[i][j] = 1;
				}
				else dp[i][j] = 0;
			}
		}
		int tmp = 0;
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j++){
				if(dp[i][j])
				tmp = max(tmp, j - i + 1);
			}
		}
		cout << tmp << endl;
	}
}