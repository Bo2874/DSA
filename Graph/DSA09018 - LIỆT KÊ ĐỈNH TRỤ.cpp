#include <bits/stdc++.h>
using namespace std;

int v, e, cnt = 0; 
bool used[1001];
vector <int> ke[1001];
void nhap(){
	memset(used, false, sizeof(used));
	for(int i = 0; i < 1001; i++) ke[i] = {};
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void DFS(int u){
	stack <int> s;
	s.push(u);
	used[u] = true;
	cnt++;
	while(!s.empty()){
		int tmp = s.top();
		s.pop();
		for(int x : ke[tmp]){
			if(!used[x]){
				used[x] = true;
				cnt++;
				s.push(tmp);
				s.push(x);
				break;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){	
		nhap();
		for(int i = 1; i <= v; i++){
			cnt = 0;
			memset(used, false, sizeof(used));
			used[i] = true;
			if(i == 1) DFS(2);
			else DFS(1);
			if(cnt < v-1) cout << i << " ";
		}
		cout << endl;
	}
}