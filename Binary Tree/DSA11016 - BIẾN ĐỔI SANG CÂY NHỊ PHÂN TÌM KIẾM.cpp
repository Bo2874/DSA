#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> se;
		for(int i = 1; i <= n; i++){
			int x, y; char c; cin >> x >> y >> c;
			se.insert(x);
			se.insert(y);
		}
		for(auto it : se) cout << it << " ";
		cout << endl;
	}
}