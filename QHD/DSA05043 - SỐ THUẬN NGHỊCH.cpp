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
		memset(F, 0, sizeof(F));	
		for(int i = 1; i <= n; i++){
			F[i][i] = 1;
		}
		for(int i = 1; i < n; i++){
			if(s[i] == s[i+1]) F[i][i+1] = 1;
		}
		for(int len = 3; len <= n; len++){
			for(int i = 1; i <= n-len+1; i++){
				int j = len + i - 1;
				if(s[i] == s[j] && F[i+1][j-1]) F[i][j] = 1;
			}
		}
		int res = 0;
		for(int i = 1; i <= n; i++){
			for(int j = i; j <= n; j++){
				if(F[i][j]) res = max(res, j - i + 1);
			}
		}
		cout<< res<< endl;
	}
}