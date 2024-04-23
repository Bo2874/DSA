#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], x[100];
void Try(int i, int bd){
	for(int j = bd; j <= n; j++){
		x[i] = j;
		if(i == k){
			for(int u = 1; u <= k; u++){
				cout << a[x[u]] <<' ';
			}
			cout << endl;
		}
		else Try(i+1, j+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a+1, a+n+1);
		Try(1,1);
	}
}