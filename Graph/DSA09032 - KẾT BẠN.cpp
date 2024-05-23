#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int n, m, cnt = 0;
vector <int> ke[100001];
bool used[100001];
void nhap(){
	cnt = 0;
	memset(used, false, sizeof(used));
	for(int i = 0; i < 100001; i++) ke[i] = {};
	cin >> n >> m;
	for(int i = 0; i < m ; i++){
		int x, y; cin >> x >> y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
	for(int i = 1; i <= n; i++) sort(ke[i].begin(), ke[i].end());
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
		int max_sv = 0;
		for(int i = 1; i <= n; i++){
			if(!used[i]){
				cnt = 0;
				DFS(i);
				max_sv = max(max_sv, cnt);
			}
		}
		cout << max_sv << endl;
	}
}