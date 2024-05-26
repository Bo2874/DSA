#include <bits/stdc++.h>
using namespace std;


//int e[1000000];
int main(){
	int t; cin >> t;
	while(t--){
	    int d[100000] = {0};
		int m, n; cin >> m >> n;
		int a[m], b[n];
		set <int> se;
		for(int i = 0 ; i < m ; i++){
			cin >> a[i];
			se.insert(a[i]);
			d[a[i]] ++;
		}
		for(int i = 0 ; i < n ; i++){
			cin >> b[i];
			se.insert(b[i]);
		}
		for(auto it : se) cout << it <<" ";
		cout << endl;
		for(int i = 0 ; i < n ; i++){
			if(d[b[i]] != 0){
				cout << b[i] <<" ";
				d[b[i]]--;
			}
		}		
		cout << endl;	
	}
}