#include <bits/stdc++.h>
using namespace std;
#define ll long long
int m, n, a[100][100], dem = 0;
void Try(int i,int j){
	if(i == m && j == n){
		dem++;
	}
	if(i+1 <= m){
		Try(i+1,j);
	}
	if(j+1 <= n){
		Try(i,j+1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		dem = 0;
		cin >> m >> n;
		for(int i = 1; i <= m ; i++){
			for(int j = 1; j <= n ; j++) cin >> a[i][j];
		}
		Try(1,1);
		cout << dem << endl;
	}
}