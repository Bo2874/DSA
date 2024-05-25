#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		int tmp = 0;
		for(int i = n-1 ; i >= 1; i--){
			if(a[i] > a[i-1]){
				tmp = i-1;
				break;
			}
		}
		if(tmp != 0){
		int tmp1 = tmp;
		for(int i = tmp+1 ; i < n ; i++){
			if(a[i] > a[tmp]){
				tmp1 = i;
			}
		}
		swap(a[tmp],a[tmp1]);
		reverse(a+tmp+1,a+n);}
		else reverse(a,a+n);
		for(int i = 0 ; i < n ; i++) cout << a[i] <<" ";
		cout << endl;
	}
}