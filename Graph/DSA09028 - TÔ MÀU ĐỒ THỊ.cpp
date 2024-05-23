#include <bits/stdc++.h>
using namespace std;

int v, e, m;
vector <int> ke[1001];
int color[1001];
int ok = 0;
bool check(int u, int c){
	for(int x : ke[u]){
		if(color[x] == c) return false;
	}
	return true;
}
void Try(int u){
	if(ok) return;
	for(int i = 1; i <= m; i++){
		if(check(u,i)){
			color[u] = i;
			if(u == v){
				ok = 1;
				return;
			}
			else Try(u+1);
			color[u] = 0;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 0;
		memset(color, 0, sizeof(color));
		for(int i = 0; i < 1001; i++){
			ke[i] = {};
		}
		cin >> v >> e >> m;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		Try(1);
		if(ok) cout <<"YES\n";
		else cout << "NO\n";
	}
}