#include <bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], res = 1e9, ok = 0;
void Try(int i, int bd, int cnt, int tong){
	if(cnt >= res) return;
	for(int j = bd; j <= n; j++){
		if(tong + a[j] <= s){
			if(tong + a[j] == s){
				ok = 1;
				res = min(res, cnt+1);
			}
			else Try(i+1, j+1, cnt+1, tong + a[j]);
		}
	}
}
int main(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1, 1, 0, 0);
	if(ok) cout << res;
	else cout << -1;
}