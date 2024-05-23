#include <bits/stdc++.h>
using namespace std;

int v, e;
vector <int> ke[1001];
bool used[1001];
int parent[1001];
int ok = 0;
void DFS(int u){
	used[u] = true;
	for(int x : ke[u]){
		if(used[x] && parent[u] != x){ // ktra xem no co phai cha con kh?
			ok = 1;
			return;
		}
		else if(used[x] == false) {
			parent[x] = u;
			DFS(x);
		}
	}
}
int main(){
	int z; cin >> z;
	while(z--){
		cin >> v >> e;
		ok = 0;
		memset(parent, 0, sizeof(parent));
		memset(used, false, sizeof(used));
		for(int i = 1; i <= 1000; i++) ke[i] = {};
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= v; i++){
			if(used[i] == 0){
				DFS(i);
			}
		}
		if(ok) cout <<"YES\n";
		else cout <<"NO\n";
	}
}