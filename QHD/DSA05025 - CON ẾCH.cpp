#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll F[n+1] = {0};
		F[0] = 1;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= 3; j++){
				if(j <= i){
					F[i] += F[i-j];
				}
			}
		}
		cout << F[n] << endl;
	}
}