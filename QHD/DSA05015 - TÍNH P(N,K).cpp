#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
ll P[1001][1001];
void init(){
	for(int i = 1; i <= 1000; i++){
		for(int j = 1; j <= i; j++){
			if(j == 1) P[i][j] = i;
			else {
				P[i][j] = ((i%mod)*(P[i-1][j-1]%mod))%mod ;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		int n, k; cin >> n >> k;
		cout << P[n][k] << endl;
	}
}