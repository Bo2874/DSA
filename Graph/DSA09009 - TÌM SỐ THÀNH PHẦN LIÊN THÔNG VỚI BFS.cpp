#include <bits/stdc++.h>
using namespace std;

vector <int> ke[1001];
bool used[1001];
int v, e;
void BFS(int s){
	queue<int> q;
	q.push(s);
	used[s] = true;
	while(!q.empty()){
		s = q.front();
		q.pop();
		for(int x : ke[s]){
			if(!used[x]){
				used[x] = true;
				q.push(x);
			}
		}
	}
}
int main(){
	int z; cin >> z;
	while(z--){
		memset(used, false, sizeof(used));
		for(int i = 1; i <= 1000; i++) ke[i] = {};
		cin >> v >> e;
		for(int i = 1; i <= e; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int cnt = 0;
		for(int i = 1; i <= v; i++){
			if(!used[i]) {
				BFS(i);
				cnt++;
			}
		}
		cout << cnt << endl;		
	}
}
