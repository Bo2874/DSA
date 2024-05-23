#include <bits/stdc++.h>
using namespace std;

int adj[1001][1001];
int main(){
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> adj[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(adj[i][j]){
				cout << j << " " ;
			}
		}
		cout << endl;
	}
}
