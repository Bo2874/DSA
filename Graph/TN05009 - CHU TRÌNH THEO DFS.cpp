#include <bits/stdc++.h>
using namespace std;

int v, e;
vector <int> ke[1001];
bool used[1001];
int parent[1001];
int ok = 0;
void DFS(int u){
	used[u] = true;
	if(ok != 0) return;
	for(int x : ke[u]){
		if(used[x] && parent[u] != x && x == 1){
			ok = u;
			return;
		}
		else if(!used[x]){
			parent[x] = u;
			DFS(x);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 0;
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		for(int i = 0; i < 1001; i++){
			ke[i] = {};
		}
		cin >> v >> e;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i < 1001; i++){
			sort(ke[i].begin(), ke[i].end());
		}
		parent[1] = 1;
		DFS(1);
		if(ok == 0) cout << "NO" << endl;
		else{
			vector <int> v;
			v.push_back(1);
			while(ok != parent[ok]){
				v.push_back(ok);
				ok = parent[ok];
			}
			v.push_back(1);
			for(int i = v.size()-1; i >= 0; i--){
				cout << v[i] <<" ";
			}
			cout << endl;
		}
	}
}