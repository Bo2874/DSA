#include <bits/stdc++.h>
using namespace std;

int n, a[100],x[100];
vector <string> v;
void Try(int i){
	string tmp = "";
	tmp += "[";
	for(int j = 1; j <= n-1; j++){
		tmp += to_string(a[j]) + " ";
	}
	tmp += to_string(a[n]) + "] ";
	v.push_back(tmp);
	n--;
	if(n == 0) return;
	for(int j = 1; j <= n; j++){
		a[j] = a[j] + a[j+1];
	}
	Try(i+1);
}
int main(){
	int t; cin >> t;
	while(t--){
		v = {};
		cin >> n;
		for(int i = 1; i <= n ; i++) cin >> a[i];
		Try(1);	
		for(int i = v.size()-1 ; i >= 0; i--) cout << v[i];
		cout << endl;
	}
}