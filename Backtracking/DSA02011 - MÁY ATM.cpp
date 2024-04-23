#include <bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100];
int min_val = 100;
void Try(int i, int bd, int sum){
	if(i >= min_val) return;
	for(int j = bd ; j <= n ; j++){
		if(sum + a[j] <= s){
			x[i] = a[j];
			if(sum + a[j] == s){
				min_val = min(min_val, i);
//				coi luôn i là số lượng tờ tiền
			}
			else Try(i+1,j+1,sum+a[j]);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		min_val = 100;
		cin >> n >> s;
		for(int i = 1; i <= n ; i++) cin >> a[i];
		Try(1,1,0);
		if(min_val != 100) cout << min_val;
		else cout << -1;
		cout << endl;
	}
}