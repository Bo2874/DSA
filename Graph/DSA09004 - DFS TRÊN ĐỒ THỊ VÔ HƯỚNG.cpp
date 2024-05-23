#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> ke[1005];
bool visited[1005];
int n, m, s;
void nhap(){
	for(int i = 1; i < 1001; i++) ke[i] = {};
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
void DFS(int u){
	cout << u << " ";
	visited[u] = true;
	for(int x : ke[u]){
		if(!visited[x]) DFS(x);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		for(int i = 1; i <= n; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		DFS(s);
		cout << endl;
	}
}