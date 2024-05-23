#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int v ,e, ok = 0, parent[1001];
bool visited[1001];
vector <int> ke[1001];

void nhap(){
	ok = 0;
	memset(visited, false, sizeof(visited));
	for(int i = 0; i < 1001; i++){
		ke[i] = {};
		parent[i] = 0;
	}
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
	for(int i = 1; i <= v; i++) sort(ke[i].begin(), ke[i].end());
	
}
void DFS(int u){
	if(ok) return;
	visited[u] = true;
	for(int x : ke[u]){
		if(visited[x] && x != parent[u]) ok = 1;
		// trên mức cha sẽ là chu trình còn mức cha con sẽ là cạnh
		else if(!visited[x]){
			parent[x] = u;
			DFS(x);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		for(int i = 1; i <= v; i++){
			if(!visited[i]) DFS(i);
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}