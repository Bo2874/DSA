#include <bits/stdc++.h>
using namespace std;

int n, p, s, x[100], a[100], cnt = 0;
vector <string> v;
bool check(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}
void Try(int i, int bd, int sum){
	for(int j = bd; j <= 46; j++){
		if(sum + a[j] <= s && a[j] > p){
			x[i] = a[j];
			if(i == n){
				if(sum + a[j] == s){
					cnt++;
					string tmp = "";
					for(int u = 1; u <= n; u++){
						tmp += to_string(x[u]) + " ";
					}
					v.push_back(tmp);
				}
			}
			else{
				Try(i+1, j+1, sum+a[j]);
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cnt = 0;
		v = {};
		cin >> n >> p >> s;
		int j = 1;
		for(int i = 1; i <= 200; i++) {
			if(check(i)) {
				a[j] = i;
				j++;
			}
		}
		Try(1, 1, 0);
		cout << cnt << endl;
		for(auto it : v) cout << it << endl;
	}
}