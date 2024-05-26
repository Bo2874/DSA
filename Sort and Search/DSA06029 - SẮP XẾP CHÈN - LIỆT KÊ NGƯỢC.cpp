#include <bits/stdc++.h>
using namespace std;

multiset <int> se;
vector <string> v;
void sx(int a[], int n){
	int i = 0;
	while(i < n){
		se.insert(a[i]);
		string s;
		s += "Buoc ";
		s += to_string(i) ;
		s += ": ";
		for(auto it : se) {
			s += to_string(it);
			s += " ";
		}
		v.push_back(s);
		i++;
	}
}
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n ; i++) cin >> a[i];
	sx(a,n);
	for(int i = v.size()-1 ; i >= 0 ; i--) cout << v[i] << endl;
//	v.clear();
}