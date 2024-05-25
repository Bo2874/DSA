#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		string x = "";
		string y = "";
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			if(i % 2 == 0) x += to_string(a[i]);
			else y += to_string(a[i]);
		}
		ll sum = stoll(x) + stoll(y);
		cout << sum << endl;
	}
}