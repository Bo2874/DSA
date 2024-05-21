#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		s = " " + s;
		int F[n+1][n+1];
		memset(F, 0, sizeof(F));
		// bài toán cơ sở xâu con có 1 kí tự
		for(int i = 1; i <= n; i++) F[i][i] = 1;
		// bài toán cơ sở xâu con có 2 kí tự
		for(int i = 1; i < n; i++){
			if(s[i] == s[i+1]){
				F[i][i+1] = 2;
			}
		}
// *bản chất là tìm xâu con đối xứng dài nhất từ vị trí i đến vị trí j *
		for(int i = n; i >= 1; i--){ // duyệt từ cuối về để sử dụng được bài toán cơ sở
			for(int j = i+2; j <= n; j++){ 
				if(s[i] == s[j] && F[i+1][j-1]){
		// nếu ở 2 đầu của xâu con bằng nhau thì cập nhật độ dài cho nó
					F[i][j] = F[i+1][j-1] + 2;
				}
			}
		}
		int res = 0;
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j++){
				res = max(res, F[i][j]);
			}
		}
		cout <<res << endl;
	}
}
