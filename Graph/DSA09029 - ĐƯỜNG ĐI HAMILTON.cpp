#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

vector <int> ke[1001];
int v, e, check = 0;
bool used[1001];
void nhap(){
	for(int i = 0; i < 1001; i++){
		ke[i] = {};
		used[i] = false;
	}
	check = 0;
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
}
// test đặc biệt : v = 5, e = 5 : 1 3 1 4 1 5 2 3 3 4
// bản chất là thử tất cả các đường của đồ thị
void DFS(int u, int cnt){
	used[u] = true;
	if(cnt + 1 == v){
		check = 1;
		return;
	}
	for(int x : ke[u]){
		if(!used[x]) DFS(x, cnt+1); 
	}
	used[u] = false; // chạy hết các đỉnh kề mà vẫn ch tìm được thì mở khóa cho u để thử đường khác
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		for(int i = 1; i <= v; i++){
			memset(used, false, sizeof(used));
			DFS(i,0);
			if(check) break;
		}
		cout << check << endl;
	}
}