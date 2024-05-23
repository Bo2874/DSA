#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[1001][1001];
int d[1001][1001]; // d? luu s? bu?c
int n, m;
bool used[1001][1001]; 

int BFS(int i, int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	d[i][j] = 0;
	while(!q.empty()){
		pair <int, int> top = q.front(); q.pop();
		int i = top.first, j = top.second;
		if(i == n && j == m) return d[i][j];
		if(i + a[i][j] <= n && !used[i+a[i][j]][j]){
			q.push({i + a[i][j], j});
			d[i + a[i][j]][j] = d[i][j] + 1;
			used[i + a[i][j]][j] = true;
		}
		if(j + a[i][j] <= m && !used[i][j + a[i][j]]){
			q.push({i, j + a[i][j]});
			d[i][j + a[i][j]] = d[i][j] + 1;
			used[i][j + a[i][j]] = true;
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> a[i][j];
			}
		}
		memset(d, 0, sizeof(d));
		memset(used, false, sizeof(used));
		cout << BFS(1,1) << endl;
	}
}