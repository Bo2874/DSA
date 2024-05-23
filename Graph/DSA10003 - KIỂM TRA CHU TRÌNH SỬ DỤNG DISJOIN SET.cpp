#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int v, e;
int parent[10001];
vector <pair<int, int>> vp;
void nhap(){
	vp = {};
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		pair <int, int> p{x,y};
		vp.push_back(p);
	}
}
void init(){
	for(int i = 1; i <= v; i++) parent[i] = i;
}
int Find(int u){
	if(u == parent[u]) return u;
	return parent[u] = Find(parent[u]);
}
bool Union(int u, int v){
	u = Find(u); v = Find(v);
	if(u == v) return false; // CÙNG THÀNH PHẦN MÀ CÓ CẠNH TỚI NHAU THÌ SẼ CÓ CHU TRÌNH
	parent[v] = u;
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		init();
		int ok = 0;
		for(auto x : vp){
			if(!Union(x.first, x.second)){
				ok = 1;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
}