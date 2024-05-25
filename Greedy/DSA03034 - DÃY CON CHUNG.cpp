#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m, k; cin >> n >> m >> k;
		int a[n], b[m], c[k];
		map <int, int> mp1;
		map <int, int> mp2;
		map <int, int> mp3;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp1[a[i]]++;
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			mp2[b[i]]++;
		}
		for(int i = 0; i < k; i++){
			cin >> c[i];
			mp3[c[i]]++;
		}
		int ok = 0;
		for(int i = 0; i < n; i++){
			if(mp1[a[i]] != 0 && mp2[a[i]] != 0 && mp3[a[i]] != 0){
				ok = 1;
				cout << a[i] <<" ";
				mp1[a[i]]--;
				mp2[a[i]]--;
				mp3[a[i]]--;
			}
		}
		if(!ok) cout <<"NO";
		cout << endl;
	}
}