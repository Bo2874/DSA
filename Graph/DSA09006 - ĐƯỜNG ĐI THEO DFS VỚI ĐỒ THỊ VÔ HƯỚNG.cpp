#include <bits/stdc++.h>
using namespace std;

bool used[1001];
vector <int> ke[1001];
int parent[1001];
int v, e, s, t;
void nhap(){
	for(int i = 0; i < 1001; i++){
		ke[i] = {};
		parent[i] = 0;
	}
	memset(used, false, sizeof(used));
	cin >> v >> e >> s >> t;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= v; i++) sort(ke[i].begin(), ke[i].end());
}
void DFS(int u){
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			used[u] = true;
			parent[x] = u;
			DFS(x);
		}
	}
}
int main(){
	int l; cin >> l;
	while(l--){
		nhap();
		DFS(s);
		if(used[t] == false) cout << -1;
		else{
			vector <int> path;
			while(t != s){
				path.push_back(t);
				t = parent[t];
			}
			path.push_back(s);
			reverse(path.begin(), path.end());
			for(int x : path) cout << x <<" ";
		}
		cout << endl;
	}
}