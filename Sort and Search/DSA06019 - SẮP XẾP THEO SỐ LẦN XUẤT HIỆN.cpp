#include <bits/stdc++.h>
using namespace std;

int p[100001] = {0};
bool cmp(int a, int b){
	if(p[a] != p[b]) return p[a] > p[b];
	return a < b;
}
int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n ; i++) cin >> a[i];
		
		for(int i = 0 ; i < n ; i++){
			p[a[i]]++;
		}
		sort(a,a+n,cmp);
		for(int i = 0 ; i < n ; i++){
			cout << a[i] <<" ";
		}
		cout << endl;
		for(int i = 0; i <= 1e5 ; i++) p[i] = 0;
	}
}