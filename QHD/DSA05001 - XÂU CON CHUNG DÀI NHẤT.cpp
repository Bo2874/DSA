#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string x, y; cin >> x >> y;
		int n = x.size(), m = y.size();
		x = ' ' + x;
		y = ' ' + y;
		int F[n+1][m+1];
		for(int i = 0; i <= n; i++) F[i][0] = 0;
		for(int j = 0; j <= m; j++) F[0][j] = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
					if(x[i] == y[j]){
						F[i][j] = F[i-1][j-1] + 1;
					}
					else{
						F[i][j] = max(F[i-1][j], F[i][j-1]);
					}
//				cout << F[i][j] << endl;
			}
		}
		cout << F[n][m] << endl;
	}
}