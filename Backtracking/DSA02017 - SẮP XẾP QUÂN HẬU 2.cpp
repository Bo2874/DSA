#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n = 8;
int a[100][100], res = 0;
bool cot[100], cheo1[100], cheo2[100];
void Try(int i, int sum){
	for(int j = 1; j <= n; j++){
		if(!cot[j] && !cheo1[i-j+n] && !cheo2[i+j-1]){
			cot[j] = true;
			cheo1[i-j+n] = true;
			cheo2[i+j-1] = true;
//			sum += a[i][j];
			if(i == 8) res = max(res, sum + a[i][j]);
			else Try(i+1, sum + a[i][j]);
			cot[j] = false;
			cheo1[i-j+n] = false;
			cheo2[i+j-1] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		res = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		Try(1, 0);
		cout << res << endl;
	}
}