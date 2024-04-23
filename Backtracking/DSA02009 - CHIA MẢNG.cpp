#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], sum =0, ok = 0;
bool used[100];
void Try(int i, int bd, int cnt, int tong){
// 	if(ok) return;
	if(cnt == k) {
		ok = 1;
		return ;
	}
	for(int j = bd; j <= n; j++){
		if(!used[j] && tong + a[j] <= sum && ok == 0){
			used[j] = true;
			if(tong + a[j] == sum) Try(1, 1, cnt+1, 0);
			else{
				Try(i+1, j+1, cnt, tong + a[j]);
			}
			used[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		sum = 0, ok = 0;
		cin >> n >> k;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum % k == 0){
			sum /= k;
			Try(1, 1, 0, 0);
			cout << ok ;
		}
		else cout << 0;
		cout << endl;
	}
}