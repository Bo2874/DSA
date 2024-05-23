#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

vector <int> ke[1001];
int a[1001];
int v, e;
void nhap(){
	for(int i = 0 ; i < 1001; i++) {
		ke[i] = {};
		a[i] = 0;
	}
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y ; cin >> x >> y;
		ke[x].pb(y);
		a[y]++;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		int cnt = 0;
		for(int i = 1; i <= v; i++){
			if(ke[i].size() == a[i]){
				// bán bậc ra bằng bán bậc vào
				cnt++;
			}
		}
		if(cnt == v) cout << 1;
		else cout << 0;
		cout << endl;
	}
}