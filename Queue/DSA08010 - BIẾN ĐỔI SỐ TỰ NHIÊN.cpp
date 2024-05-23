#include <bits/stdc++.h>
using namespace std;
#define ll long long


int BFS(int n){
	queue <pair<int,int>> q;
	q.push({n, 0});
	set <int> se; 
	while(!q.empty()){
		pair <int,int> p = q.front();
		q.pop();
		if(p.first == 1) return p.second;
		n = p.first;
		q.push({n-1, p.second+1});
		int x = 1e9;
		for(int i = 2; i <= sqrt(n); i++){ // thử tất cả trường hợp của nó
			if(n % i == 0){
				if(se.count(n/i) == 0){ //tránh check vào những cái đi rồi
					q.push({n/i, p.second+1});
					se.insert(n/i);
				}
			}
		}
	}
	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << BFS(n) << endl;
	}
}