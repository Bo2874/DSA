#include <bits/stdc++.h>
using namespace std;

int v, e, z;
vector <int> ke[1001];
bool used[1001];
vector <pair<int,int>> s;
void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int u = q.front(); q.pop();
		for(int x : ke[u]){
			if(!used[x]){
				used[x] = true;
				q.push(x);
				s.push_back({u,x});
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		s = {};
		memset(used, false, sizeof(used));
		for(int i = 0; i < 1001; i++){
			ke[i] = {};
		}
		cin >> v >> e >> z;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		BFS(z);
		if(s.size() != v-1) cout <<"-1\n";
		else{
			for(auto it : s){
				cout << it.first <<" "<< it.second << endl;
			}
		}
	}
}