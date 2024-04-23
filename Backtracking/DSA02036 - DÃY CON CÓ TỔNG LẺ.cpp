#include <bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
vector <vector<int>> v;
bool cmp(int x, int y){
	return x > y;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			int tong = 0;
			for(int u = 1; u <= n; u++){
				if(x[u] == 1) tong += a[u];
			}
			if(tong % 2 != 0){
				vector <int> l ;
				for(int u = n; u >= 1; u--){
					if(x[u] == 1) l.push_back(a[u]);
				}
				sort(l.begin(), l.end(), cmp);
				v.push_back(l);
			}
		}
		else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v = {};
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		Try(1);
		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++){
			for(auto it : v[i]) cout << it <<" ";
			cout << endl;
		}
	}
}