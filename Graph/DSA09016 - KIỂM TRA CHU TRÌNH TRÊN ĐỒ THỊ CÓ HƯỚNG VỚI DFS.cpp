#include <bits/stdc++.h>
using namespace std;

// Test d? hi?u color = 2 : v = 3,e = 3, 1-2,3-1,3-2
int v, e;
vector <int> ke[1001];
int color[1001];
int ok = 0;
void DFS(int u){
	color[u] = 1;
	for(int x : ke[u]){
		if(color[x] == 1){ 
			ok = 1;
			return;
		}
		else if(color[x] == 0){
			DFS(x);
		}
	}
	color[u] = 2;
}
int main(){
	int z; cin >> z;
	while(z--){
		cin >> v >> e;
		ok = 0;
		memset(color, 0, sizeof(color));
		for(int i = 1; i <= 1000; i++) ke[i] = {};
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1; i <= v; i++){
			if(color[i] == 0) DFS(i);
		}
		if(ok) cout <<"YES\n";
		else cout <<"NO\n";
	}
}
