#include <bits/stdc++.h>
using namespace std;

int n, k, X[100],a[100], ok = 1;
void in(){
	int tong = 0;
	for(int i = 1; i <= n ; i++){
		if(X[i] == 0) tong += a[i];
	}
	if(tong == k){
		ok = 0;
		vector <int> v;
		for(int i = 1; i <= n ; i++){
			if(X[i] == 0) v.push_back(a[i]);
		}
		string s;
		s += "[";
		for(int i = 0; i < v.size()-1 ; i++) {
			s += to_string(v[i]);
			s += " ";
		}
		s += to_string(v[v.size()-1]);
		s += "]";
		cout << s <<" ";
	}
}
void Try(int i){
	for(int j = 0 ; j <= 1; j++){
		X[i] = j;
		if(i == n) in();
		else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 1;
		cin >> n >> k;
		for(int i = 1; i <= n ; i++) cin >> a[i];
		sort(a+1,a+n+1);
		Try(1);
		if(ok) cout <<"-1";
		cout << endl;		
	}
}