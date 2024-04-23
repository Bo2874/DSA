#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], x[100], cnt = 0;
vector <string> v;
void Try(int i,int bd, int sum){
	for(int j = bd; j <= n; j++){
		if(sum + a[j] <= k){
			x[i] = a[j];
			if(sum + a[j] == k  ) {
				cnt++;
				string tmp = "";
				tmp += "{";
				for(int u = 1; u <= i-1; u++){
					tmp += to_string(x[u]) + " ";
				}
				tmp += to_string(x[i]) + "}";
				v.push_back(tmp);
			}
			else Try(i+1,j, sum + a[j]);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v = {};
		cnt = 0;
		cin >> n >> k ;
		for(int i = 1; i <= n; i++) cin >> a[i];
// 		sort(a+1, a+n+1);
		Try(1,1,0);
		if(!cnt) cout << -1;
		else {
			cout << cnt <<" ";
			for(string s : v) cout << s << " ";
		}
		cout << endl;
	}
}