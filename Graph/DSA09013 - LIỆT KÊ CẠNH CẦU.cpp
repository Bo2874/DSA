#include <bits/stdc++.h>
using namespace std;

int v, e;
bool used[1001];
vector <int> ke[1001];
vector <pair<int, int>> edge;

void nhap(){
	cin >> v >> e;
	for(int i = 0 ; i < 1001; i++) ke[i] = {};
	memset(used, false, sizeof(used));
	edge = {};
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
		edge.push_back({x, y});
	}
	for(int i = 1; i <= v; i++) sort(ke[i].begin(), ke[i].end());
}
void BFS(int u, int s, int t){
	queue <int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		for(int x : ke[tmp]){
			if(!used[x]){
				if(tmp == s && x == t || tmp == t && x == s) continue;
				used[x] = true;
				q.push(x);
			}
		}
	}
}
int dem(int s, int t){
	int cnt = 0;
	for(int i = 1; i <= v; i++){
		if(!used[i]){
			BFS(i, s, t);
			cnt++;
		}
	}
	return cnt;
}
int main(){
	int l; cin >> l;
	while(l--){
		nhap();
		int bd = dem(0,0);
		for(auto it : edge){
			memset(used, false, sizeof(used));
			int ls = dem(it.first, it.second);
			if(ls > bd) cout << it.first <<" "<< it.second <<" ";
		}
		cout << endl;
	}
}