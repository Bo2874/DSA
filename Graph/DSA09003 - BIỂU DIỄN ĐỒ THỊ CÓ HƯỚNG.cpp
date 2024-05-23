#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		vector <int> ke[n+1];
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			ke[x].push_back(y);
		}
		for(int i = 1; i <= n; i++){
			cout << i <<": ";
			sort(ke[i].begin(), ke[i].end());
			for(int j = 0; j < ke[i].size(); j++) cout << ke[i][j] <<" ";
			cout << endl;
		}
	}
}