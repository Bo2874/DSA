#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n1,n2,n3 ; cin >> n1 >> n2 >> n3;
		long long a[n1], b[n2], c[n3];
		for(int i = 0 ; i < n1 ; i++) cin >> a[i];
		for(int i = 0 ; i < n2 ; i++) cin >> b[i];
		for(int i = 0 ; i < n3 ; i++) cin >> c[i];
		long long giao[min(n1,n2)];
		int i = 0, j = 0, g = 0;
		while(i < n1 && j < n2){
			if(a[i] == b[j]){
				giao[g] = a[i];
				i++;j++;g++;
			}
			else if(a[i] > b[j]) j++;
			else i++;
		}
//		for(int i = 0 ; i < g ; i++) cout << giao[i] <<" ";
//		cout << endl;
		int ok = 1;
		int l = 0, r = 0;
		while(l < n3 && r < g){
			if(c[l] == giao[r]){
				ok = 0;
				cout << c[l] <<" ";
				l++;r++;
			}
			else if(c[l] > giao[r]) r++;
			else l++;
		}
		if(ok) cout << -1;
		cout << endl;
	}
}