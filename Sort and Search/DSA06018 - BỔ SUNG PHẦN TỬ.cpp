#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		set <int> se;
		for(int i = 0; i < n ; i++) {
			cin >> a[i];
			se.insert(a[i]);
		}
		sort(a,a+n);
		int gtmin = a[0],gtmax = a[n-1];
		int kc = gtmax - gtmin + 1;
		cout << kc - se.size() << endl;
	}
}