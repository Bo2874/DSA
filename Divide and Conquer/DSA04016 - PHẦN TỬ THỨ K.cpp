#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		vector <int> v;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		for(int i = 0; i < m; i++){
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout << v[k-1] << endl;
	}
}