#include <bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
#define pb push_back


int n, m, s;
vector <ii> adj[1005];
void nhap(){
    for(int i = 0; i < 1005; i++) adj[i] = {};
	cin >> n >> m >> s;
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		adj[x].pb({y, w});
		adj[y].pb({x, w});
	}
}
void dijkstra(){
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({0,s});
	vector <int> d(n+1, 1e9); d[s] = 0;
	while(!q.empty()){
		ii t = q.top(); q.pop();
		int dis = t.first, u = t.second;
		if(dis > d[u]) continue;
		for(ii e : adj[u]){
			int v = e.first, w = e.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				q.push({d[v], v});
			}
		}
	}
	for(int i = 1; i <= n; i++){
		cout << d[i] << " ";
	}
	cout << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		dijkstra();
	}
}