#include <bits/stdc++.h>
using namespace std;

vector <string> v;
void sx(int a[],int n){
	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i+1; j < n ; j++){
			if(a[j] < a[i]) swap(a[j],a[i]);
		}
		string s;
		s += "Buoc ";
		s += to_string(i+1);
		s += ": ";
		for(int k = 0 ; k < n ; k++){
			s += to_string(a[k]);
			s += " ";
		}
		v.push_back(s);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		sx(a,n);
		for(int i = v.size()-1 ; i >= 0 ; i--) cout << v[i] << endl;
		v.clear();
	}
}