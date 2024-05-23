#include <bits/stdc++.h>
using namespace std;

int v, e;
vector <int> ke[1001];
bool used[1001];
int cnt = 0;
void DFS(int u){
	used[u] = true;
	cnt++;
	for(int x : ke[u]){
		if(!used[x]) DFS(x);
	}
}
int main(){
	int z; cin >> z;
	while(z--){
		cin >> v >> e;
		for(int i = 1; i <= 1000; i++) ke[i] = {};
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for(int i = 1; i <= v; i++){
			memset(used, false, sizeof(used));
			cnt = 0;
			used[i] = true; 
			if(i == 1){
				DFS(2);
			}
			else DFS(1);
			if(cnt < v-1) cout << i << " ";
		}
		cout << endl;
	}
}
