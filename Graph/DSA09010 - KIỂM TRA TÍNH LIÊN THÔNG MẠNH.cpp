#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int v, e, ok = 0, cnt = 0;
bool used[1001];
vector <int> ke[1001];

void nhap(){
	ok = 0;
	memset(used, false, sizeof(used));
	for(int i = 0; i < 1001; i++){
		ke[i] = {};
	}
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].pb(y);
	}
	for(int i = 1; i <= v; i++) sort(ke[i].begin(), ke[i].end());
}
void DFS(int u){
	cnt++;
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]) DFS(x);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		for(int i = 1; i <= v; i++){
			memset(used, false, sizeof(used));
			cnt = 0;
			DFS(i);
			if(cnt != v) ok = 1;
		}
		if(!ok) cout << "YES\n";
		else cout << "NO\n";
	}
}