#include <bits/stdc++.h>
using namespace std;
#define ll long long

int v, e;
vector <int> ke[1001];
bool visited[1001];
void nhap(){
	for(int i = 1; i < 1001 ; i++) ke[i] = {};
	memset(visited, false, sizeof(visited));
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void DFS(int u){
	visited[u] = true;
	for(int x : ke[u]){
		if(!visited[x]){
			visited[x] = true;
			DFS(x);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		int cnt = 0;
		for(int i = 1; i <= v; i++){
			if(!visited[i]){
				DFS(i);
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}