#include <bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
		int cnt = 0;
		for(int i = 9; i >= 0; i--){
			while(a[i] <= n){
				n -= a[i];
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}