#include <bits/stdc++.h>
using namespace std;

int main(){
	int c, n; cin >> c >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	vector <bool> F(c+1, false);
	F[0] = true; // đánh dấu các a[i] có trong dãy khi xét
	for(int i = 0; i < n; i++){
		for(int j = c ; j >= a[i]; j--){
			if(F[j-a[i]]){
				F[j] = true;
			}
		}
	}
	for(int i = c; i >= 0;i--){
		if(F[i]){
			cout << i << endl;
			break;
		}
	}
}