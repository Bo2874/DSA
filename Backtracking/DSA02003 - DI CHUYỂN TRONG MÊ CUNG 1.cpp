#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100][100],ok = 1;
void Try(int i, int j, string s){
	if(i == n && j == n){
		ok = 0;
		cout << s << " ";
	}
//	xet nhanh down : D i + 1, j
	if(i+1 <= n && a[i+1][j] == 1){
		a[i+1][j] = 0; // khong di lai o nay
		s += 'D';
		Try(i+1,j,s);
		a[i+1][j] = 1;
		s.pop_back();
	}
//	xet nhanh right : R i, j + 1
	if(j+1 <= n && a[i][j+1] == 1){
		a[i][j+1] = 0;
		s += 'R';
		Try(i,j+1,s);
		a[i][j+1] = 1;
		s.pop_back();
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 1;
		cin >> n;
		for(int i = 1; i <= n ;i++){
			for(int j = 1; j <= n ; j++) cin >> a[i][j];
		}
		string s = "";
		if(a[1][1] == 0  ) cout <<"-1";
		else{
		Try(1,1,s);
		if(ok) cout << "-1";
		}
		cout << endl;
	}
}