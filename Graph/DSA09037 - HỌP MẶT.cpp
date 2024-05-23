#include <bits/stdc++.h>
using namespace std;

int k, n, m;
vector <int> ke[100005];
bool used[100005];
int d[100005], cnt = 0, khach[100005];

void dfs(int u){
	d[u]++;
//	if(d[u] == k) cnt++;
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			dfs(x);
		}
	}
}
void nhap(){
	cin >> k >> n >> m;
	for(int i = 0; i < k; i++){
		cin >> khach[i];
	}
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
	}
}
int main(){
	nhap();
	for(int i = 0; i < k; i++){
		memset(used, false, sizeof(used));
		dfs(khach[i]);
	}
	for(int i = 1; i <= n; i++){
		if(d[i] == k) cnt++;
	}
	cout << cnt ;
}