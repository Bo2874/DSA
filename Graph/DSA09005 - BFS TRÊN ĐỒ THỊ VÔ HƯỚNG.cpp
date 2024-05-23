#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> ke[1001];
int v, e, s;
bool visited[1001];
void nhap(){
	for(int i = 1; i < 1001; i++) ke[i] = {};
	cin >> v >> e >> s;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(visited, false, sizeof(visited));
}
void BFS(int u){
	visited[u] = true;
	queue <int> q;
	q.push(u);
	while(q.size()){
		int tmp = q.front();
		cout << tmp << " ";
		q.pop();
		for(int x : ke[tmp]) {
			if(visited[x] == false) q.push(x);
			visited[x] = true;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		for(int i = 1; i <= v; i++) sort(ke[i].begin(), ke[i].end());
		BFS(s);
		cout << endl;
	}
}