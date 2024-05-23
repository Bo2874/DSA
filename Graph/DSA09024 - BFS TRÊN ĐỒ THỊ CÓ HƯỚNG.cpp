#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1001];
bool used[1001];
int v, e;
void BFS(int u){
	queue <int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		u = q.front();
		q.pop();
		cout << u << " ";
		for(int x : ke[u]){
			if(!used[x]){
				used[x] = true;
				q.push(x);
			}
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
		BFS(u);
		cout << endl;
	}
}
