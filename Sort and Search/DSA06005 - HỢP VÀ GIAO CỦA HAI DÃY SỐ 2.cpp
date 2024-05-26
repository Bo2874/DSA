#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		int m, n; cin >> m >> n;
		int a[m], b[n];
		for(int i = 0 ; i < m ; i++) cin >> a[i];
		for(int i = 0 ; i < n ; i++) cin >> b[i];
		sort(a,a+m); sort(b,b+n);
		int hop[m+n], giao[min(m,n)];
		int i = 0, j = 0, h = 0, g = 0;
		while(i < m && j < n ){
			if(a[i] == b[j]){
				hop[h] = a[i];
				giao[g] = a[i];
				h++;g++;
				i++;j++;
			}
			else if(a[i] > b[j]){
				hop[h] = b[j];
				h++;j++;
			}
			else {
				hop[h] = a[i];
				h++;i++;
			}
		}
		while(i < m){
			hop[h] = a[i];
			h++;i++;
		}
		while(j < n){
			hop[h] = b[j];
			h++;j++;
		}
		for(int i = 0 ; i < h ; i++) cout << hop[i]<<" ";
		cout << endl;
		for(int i = 0 ; i < g ; i++) cout << giao[i] <<" ";
		cout << endl;
	}
}