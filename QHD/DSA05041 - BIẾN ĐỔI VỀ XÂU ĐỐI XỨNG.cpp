#include <bits/stdc++.h>
using namespace std;
#define ll long long

int F[1001][1001];
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		s = " " + s;
		int F[n+1][n+1]; // xây xâu đối xứng không liên tiếp từ chỉ số i đến chỉ số j
		memset(F, 0, sizeof(F));
		for(int i = 1; i <= n; i++) F[i][i] = 1; // bài toán con nhỏ nhất là xâu con có độ dài 1 có xâu đối xứng dài nhất là 1
		for(int i = n; i >= 1; i--){
			for(int j = i+1; j <= n; j++){
				if(s[i] == s[j]) F[i][j] = F[i+1][j-1] + 2;
				else F[i][j] = max(F[i][j-1], F[i+1][j]);
//	viết ngược từ n về là để biết giá trị của F[i+1][j] và F[i+1][j-1]
			}
		}
		cout << n - F[1][n] << endl;
	}
}