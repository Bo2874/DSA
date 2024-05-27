#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> ke[100001];
bool used[100001];
int d[100001];
int res = 0;
void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u] = true;
	d[u] = 0;
	while(!q.empty()){
		int tmp = q.front(); q.pop();
		for(int x : ke[tmp]){
			if(!used[x]){
				used[x] = true;
				q.push(x);
				d[x] = d[tmp]+1;
				res = max(res, d[x]);
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		res = 0;
		for(int i = 0; i < 100001; i++) ke[i] = {};
		memset(used, false, sizeof(used));
		memset(d, 0, sizeof(d));
		int n; cin >> n;
		for(int i = 1; i <= n-1; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		BFS(1);
		cout << res << endl;
	}
}