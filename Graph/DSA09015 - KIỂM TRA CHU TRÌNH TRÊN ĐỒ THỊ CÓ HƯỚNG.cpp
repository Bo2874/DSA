#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int v, e, color[1001], ok = 0;
vector <int> ke[1001];
bool used[1001];
void nhap(){
	ok = 0;
	for(int i = 0; i < 1001; i++){
		color[i] = 0;
		ke[i] = {};
	}
	memset(used, false, sizeof(used));
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].pb(y);
	}
	for(int i = 1; i <= v; i++) sort(ke[i].begin(), ke[i].end());
}
void DFS(int u){
	color[u] = 1;
	used[u] = true;
	for(int x : ke[u]){
		if(color[x] == 1) {
			ok = 1;
			return;
		}
		else if(color[x] == 0) {
			used[x] = true;
			DFS(x);
		}
	}
	color[u] = 2;
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		for(int i = 1; i <= v; i++){
			if(!used[i]) DFS(i);
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}