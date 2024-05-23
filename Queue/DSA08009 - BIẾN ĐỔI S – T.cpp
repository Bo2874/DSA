#include <bits/stdc++.h>
using namespace std;
#define ll long long

int d[100005]; // lưu số bước đến t

int solve(int s, int t){
	queue <int> q;
	q.push(s);
	d[s] = 0;
	set <ll> se;
	se.insert(s); // để đánh dấu những cái đi r
	while(!q.empty()){ // chạy như BFS
		int top = q.front(); q.pop();
		if(top == t) {
			return d[top];
		}
		if(se.count(top-1) == 0 && top-1 >= 1){
		// tránh đi lại vào những cái đã đi rồi
			q.push(top-1);
			se.insert(top-1);
			d[top-1] = d[top] + 1;
		}
		if(se.count(top*2) == 0 && top < t){
			q.push(top*2);
			se.insert(top*2);
			d[top*2] = d[top] + 1;
		}
	}
	return -1;
}
int main(){
	int q; cin >> q;
	while(q--){
		int s, t; cin >> s >> t;
		memset(d, 0, sizeof(d));
		cout << solve(s,t) << endl;
	}
}