#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1001];
bool used[1001];
int v, e;
void DFS(int u){
	cout << u <<" ";
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			DFS(x);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(used, false, sizeof(used));
		for(int i = 1; i <= 1000; i++) ke[i] = {};
		int u;
		cin >> v >> e >> u;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		DFS(u);
		cout << endl;
	}
}
