#include <bits/stdc++.h>
using namespace std;
#define ll long long


// Nên tạo ra 2 mảng có sẵn để lưu chỉ số của i và j để code ngắn gọn hơn
int u, v;
int d[100][100];
bool used[100][100];
int BFS(int x, int y){
	queue <pair<int,int>> q;
	q.push({x,y});
	d[x][y] = 0;
	used[x][y] = true;
	while(!q.empty()){
		pair<int,int> p = q.front(); 
		q.pop();
		int x = p.first, y = p.second;
		if(x == u && y == v) return d[x][y];
		if(x-2 >= 1 && y-1 >= 1 && !used[x-2][y-1]){
			q.push({x-2, y-1});
			d[x-2][y-1] = d[x][y] + 1;
			used[x-2][y-1] = true;
		}
		if(x-2 >= 1 && y+1 <= 8 && !used[x-2][y+1]){
			q.push({x-2, y+1});
			d[x-2][y+1] = d[x][y] + 1;
			used[x-2][y+1] = true;
		}
		if(x-1 >= 1 && y-2 >= 1 && !used[x-1][y-2]){
			q.push({x-1, y-2});
			d[x-1][y-2] = d[x][y] + 1;
			used[x-1][y-2] = true;
		}
		if(x-1 >= 1 && y+2 <= 8 && !used[x-1][y+2]){
			q.push({x-1, y+2});
			d[x-1][y+2] = d[x][y] + 1;
			used[x-1][y+2] = true;
		}
		if(x+1 <= 8 && y-2 >= 1 && !used[x+1][y-2]){
			q.push({x+1, y-2});
			d[x+1][y-2] = d[x][y] + 1;
			used[x+1][y-2] = true;
		}
		if(x+1 <= 8 && y+2 <= 8 && !used[x+1][y+2]){
			q.push({x+1, y+2});
			d[x+1][y+2] = d[x][y] + 1;
			used[x+1][y+2] = true;
		}
		if(x+2 <= 8 && y-1 >= 1 && !used[x+2][y-1]){
			q.push({x+2, y-1});
			d[x+2][y-1] = d[x][y] + 1;
			used[x+2][y-1] = true;
		}
		if(x+2 <= 8 && y+1 <= 8 && !used[x+2][y+1]){
			q.push({x+2, y+1});
			d[x+2][y+1] = d[x][y] + 1;
			used[x+2][y+1] = true;
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(used, false, sizeof(used));
		memset(d, 0, sizeof(d));
		string s1, s2; cin >> s1 >> s2;
		int x = s1[0] - 'a' + 1;
		int y = s1[1] - '0';
		u = s2[0] - 'a' + 1;
		v = s2[1] - '0';
		cout << BFS(x,y) << endl;
	}
}