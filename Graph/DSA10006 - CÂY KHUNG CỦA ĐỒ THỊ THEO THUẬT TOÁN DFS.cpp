#include <bits/stdc++.h>
using namespace std;

int v, e, z;
vector <int> ke[1001];
bool used[1001];
vector <string> s;
void DFS(int u){
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			string tmp = "";
			tmp += to_string(u);
			tmp += " " + to_string(x);
			s.push_back(tmp);
			DFS(x);
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
// 		for(int i = 1; i < 1001; i++){
// 			sort(ke[i].begin(), ke[i].end());
// 		}
		DFS(z);
		if(s.size() != v-1) cout <<"-1\n";
		else{
			for(int i = 0; i < s.size(); i++) cout << s[i] <<endl;
		}
// 		cout << endl;
	}
}