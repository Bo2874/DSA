#include <bits/stdc++.h>
using namespace std;


int n, a[100], x[100];
vector <vector<int>> v;
bool check(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}
bool cmp(int a, int b){
	return a > b;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			int tong = 0;
			for(int u = 1; u <= n; u++){
				if(x[u] == 1) tong+=a[u];
			}
			if(check(tong)){
				vector <int> l;
				for(int u = 1; u <= n; u++){
					if(x[u] == 1) l.push_back(a[u]);
				}
//				sort(l.begin(), l.end(), cmp);
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
		sort(a+1, a+n+1, cmp);
		Try(1);
//		sort(v.begin(), v.end());
		for(int i = 0; i < v.size(); i++){
			for(auto it : v[i]) cout << it <<" ";
			cout << endl;
		}
	}
}