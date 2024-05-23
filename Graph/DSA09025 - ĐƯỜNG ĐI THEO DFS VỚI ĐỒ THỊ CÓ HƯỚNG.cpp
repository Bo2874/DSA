#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1001];
bool used[1001];
int parent[1001];
int v, e;
void DFS(int s){
	used[s] = true;
	for(int x : ke[s]){
		if(!used[x]) {
			DFS(x);
			parent[x] = s;
		}
	}
}
int main(){
	int z; cin >> z;
	while(z--){
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));
		for(int i = 1; i <= 1000; i++) ke[i] = {};
		int s, t; 
		cin >> v >> e >> s >> t;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		parent[s] = s;
		DFS(s);
		if(parent[t] == 0) cout << -1 << endl;
		else{
			vector <int> v;
			while(t != parent[t]){
				v.push_back(t);
				t = parent[t];
			}
			v.push_back(t);
			for(int i = v.size()-1 ; i >= 0; i--) cout << v[i] <<" ";
			cout << endl;
		}
	}
}
