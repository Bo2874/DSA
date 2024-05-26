#include <bits/stdc++.h>
using namespace std;

int main(){
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		int gt_min = 1e9;
		for(int i = 0 ; i < n ; i++){
			for(int j = i+1 ; j < n ; j++){
				if(abs(a[j]+a[i]) < abs(gt_min)){
					gt_min = a[j] + a[i];
				}
			}
		}
		cout << gt_min << endl;	
	}
}