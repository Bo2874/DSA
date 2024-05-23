#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

vector <int> ke[1001];
int v, e;
void nhap(){
	for(int i = 0 ; i < 1001; i++) ke[i] = {};
	cin >> v >> e;
	for(int i = 0; i < e; i++){
		int x, y ; cin >> x >> y;
		ke[x].pb(y);
		ke[y].pb(x);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		int c = 0, l = 0;
		for(int i = 1; i <= v; i++){
			if(ke[i].size() % 2 == 0 && ke[i].size() != 0){
				c++;
			}
			else if(ke[i].size() % 2 == 1 && ke[i].size() != 0){
				l++;
			}
		}
		if(c == v) cout << 2;
		else if(c == v-2) cout << 1;
		else cout << 0;
		cout << endl;
	}
}