#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100], x[100];
vector <string> v;
void in(int m){
	string tmp = "";
	tmp += "[";
	for(int i = 1; i < m; i++){
		tmp += to_string(x[i]) + " ";
	}
	tmp += to_string(x[m]) + "]";
	v.push_back(tmp); 
}
void Try(int i, int bd, int sum){
	for(int j = bd; j <= n; j++){
		if(sum + a[j] <= k){
			x[i] = a[j];
			if(sum + a[j] == k) in(i);
			else Try(i + 1, j, sum + a[j]);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v = {};
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		Try(1, 1, 0);
		if(v.size())
		for(auto it : v) cout << it ;
		else cout << -1 ;
		cout << endl;
	}
}