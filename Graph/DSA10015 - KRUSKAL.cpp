#include <bits/stdc++.h>
using namespace std;
#define pb push_back

// KRUSKAL
struct edge{
	int x, y, w;	
};
vector <edge> E;
int parent[10001];
int m, n;
bool cmp(edge x, edge y){
	return x.w < y.w;
}
void nhap(){
	E = {};
	cin >> m >> n;
	for(int i = 0; i < n; i++){
		int x, y, w; cin >> x >> y >> w;
		edge e{x,y,w};
		E.pb(e);
	} 
	sort(E.begin(), E.end(), cmp); 
}
void init(){
	for(int i = 1; i <= m; i++){
		parent[i] = i;
	}
}
int Find(int u){
	if(u == parent[u]) return u;
	return Find(parent[u]);
}
bool Union(int u, int v){
	u = Find(u); v = Find(v);
	if(u == v) return false;
	parent[u] = v;
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		init();
		int sum_min = 0;
		for(edge k : E){
			if(Union(k.x, k.y)) sum_min += k.w;
		}
		cout << sum_min << endl;
	}
}
