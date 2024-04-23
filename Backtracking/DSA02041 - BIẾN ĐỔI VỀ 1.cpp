#include <bits/stdc++.h>
using namespace std;

int n, res = 1e9;
void Try(int n, int cnt){
	if(cnt >= res) return;
	if(n == 1) res = min(res, cnt);
	if(n % 2 == 0){
		Try(n/2, cnt+1);
	}
	if(n % 3 == 0) {
		Try(n/3, cnt+1);
	}
	if(n > 1)
	Try(n-1, cnt+1);
}
int main(){
	int t; cin >> t;
	while(t--){
		res = 1e9;
		cin >> n;
		Try(n, 0);
		cout << res<< endl;
	}
}