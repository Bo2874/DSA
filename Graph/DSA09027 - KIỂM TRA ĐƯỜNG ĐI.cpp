#include <bits/stdc++.h>
using namespace std;
#define ll long long

int v, e;
vector <int> ke[1001];
int visited[1001];
void nhap(){
	for(int i = 1; i < 1001 ; i++) ke[i] = {};
	for(int i = 0; i < 1001; i++) visited[i] = 0;
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void DFS(int u,int cnt){
	visited[u] = cnt;
	for(int x : ke[u]){
		if(visited[x] == 0){
			DFS(x,cnt);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		int cnt = 1;
		for(int i = 1; i <= v; i++){
			if(!visited[i]){
				DFS(i,cnt);
				cnt++;
			}
		}
		int q; cin >> q;
		while(q--){
			int x, y; cin >> x >> y;
			if(visited[x] == visited[y]) cout <<"YES\n";
			else cout <<"NO\n";
		}
	}
}