#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0;j < m; j++){
				cin >> a[i][j];
			}
		}
		int F[n][m];
		memset(F, 0, sizeof(F));
		int ans = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(i == 0 || j == 0){
					F[i][j] = a[i][j];
					ans = max(F[i][j], ans);
				}
				else{
					if(a[i][j])
					F[i][j] = min({F[i-1][j-1], F[i-1][j], F[i][j-1]}) + 1;
					ans = max(F[i][j], ans);
				}
			}
		}
		cout << ans << endl;
	}
}
