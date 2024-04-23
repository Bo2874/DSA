#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m, l; cin >> n >> m >> l;
		string x, y, z; cin >> x >> y >> z;
//		int n = x.size(), m = y.size(), l = z.size();
		int F[n+1][m+1][l+1];
		memset(F, 0, sizeof(F));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m;j++){
				for(int k = 1; k <= l; k++){
					if(x[i-1] == y[j-1] && y[j-1] == z[k-1]){
						F[i][j][k] = F[i-1][j-1][k-1] + 1;
					}
					else F[i][j][k] = max({F[i-1][j][k], F[i][j-1][k], F[i][j][k-1]});
				}
			}
		}
		cout << F[n][m][l] << endl;
	}
}