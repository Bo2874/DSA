#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool check(int n){
	set <int> se; // dùng set để check các số khác nhau trong dãy
	while(n){
		int r = n%10;
		if(se.count(r) || r > 5) return false;
		se.insert(r);
		n /= 10;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		int cnt = 0;
		for(int i = l; i <= r; i++){
			if(check(i)) cnt++;
		}
		cout << cnt << endl;
	}
}