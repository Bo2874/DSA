#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k ; cin >> n >> k;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		multiset <int> se;
		for(int i = 0 ; i < k-1 ; i++) se.insert(a[i]);
		for(int i = k-1 ; i < n ; i++){
			se.insert(a[i]);
			auto it1 = se.rbegin();
			cout << *it1 <<" ";
			auto it2 = se.find(a[i-k+1]);
			se.erase(it2);
		}
		cout << endl;
	}
}