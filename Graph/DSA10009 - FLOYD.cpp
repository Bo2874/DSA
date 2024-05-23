#include <bits/stdc++.h>
using namespace std;

int Mat[1005][1005];
int n, m;
void nhap(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) Mat[i][j] = 1e9;
	}
	for(int i = 1; i <= n; i++) Mat[i][i] = 0;
	for(int i = 0; i < m; i++){
		int u, v, w; cin >> u >> v >> w;
		Mat[u][v] = Mat[v][u] = w; 
	}
}
void Floyd(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				Mat[i][j] = min(Mat[i][j], Mat[i][k] + Mat[k][j]);
			}
		}
	}
}
int main(){
	nhap();
	Floyd();
	int q; cin >> q;
	while(q--){
		int x, y; cin >> x >> y;
		cout << Mat[x][y] << endl;
	}
	
}