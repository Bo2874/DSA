#include <bits/stdc++.h>
using namespace std;

int n, x[100];
vector <string> v;
string tmp;
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == n){
			string r;
			for(int u = 1; u <= n; u++){
				if(x[u]) r += tmp[u];
			}
			v.push_back(r);
		}
		else Try(i+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v = {};
		cin >> n;
		string s; cin >> s;
		s = " " + s;
		tmp = s;
		Try(1);
		sort(v.begin(), v.end());
		for(auto it : v) cout << it <<" ";
		cout <<endl;
	}
}