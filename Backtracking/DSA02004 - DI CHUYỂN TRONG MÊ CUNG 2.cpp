#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int a[10][10], ok = 0;
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char xuly(int x){
	string s = "DLRU";
	return s[x];
}
void Try(int i, int j, string s){
	if(i == n && j == n){
		ok = 1;
		cout << s <<" ";
	}
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k], j1 = j + dy[k];
		if(a[i1][j1] && i1 <= n && i1 >= 1 && j1 <= n && j1 >= 1){
			a[i][j] = 0;
			Try(i1, j1, s + xuly(k));
			a[i][j] = 1;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 0;
		cin >> n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		string s = "";
		if(a[1][1]){
			Try(1, 1, s);
		}
		if(!ok) cout << -1;
		cout << endl;
	}
}