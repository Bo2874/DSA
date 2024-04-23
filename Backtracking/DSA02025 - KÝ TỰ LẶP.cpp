#include <bits/stdc++.h>
using namespace std;

int n, res = 1e9, x[100];
bool used[100];
string a[100];
int tinh(string x, string y){
	int cnt = 0;
	for(int i = 0; i < x.size(); i++){
		for(int j = 0;j < y.size(); j++){
			if(x[i] == y[j]) cnt++;
		}
	}
	return cnt;
}
void Try(int i, int t){
	for(int j = 1; j <= n; j++){
		if(!used[j] && t < res){
			used[j] = true;
			x[i] = j;
			if(i == n){
				// int dem = 0;
				// for(int u = 1; u < n; u++){
				// 	dem += tinh(a[x[u]], a[x[u+1]]);
				// }
				res = min(res, t + tinh(a[x[i]], a[x[i-1]]));
			}
			else {
				if(i > 1)
				Try(i+1, t + tinh(a[x[i]], a[x[i-1]]));
				else Try(i+1, t);
			}
			used[j] = false;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	Try(1, 0);
	cout << res;
}