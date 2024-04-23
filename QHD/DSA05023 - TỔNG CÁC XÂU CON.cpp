#include <bits/stdc++.h>
using namespace std;
#define ll long long

// tư duy rộng ra, không nhìn vào 1 2 3 4 mà nhìn ra 1 12 123 1234
//  CACH 2
int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		ll sum = 0;
		int n = s.size();
		ll F[n+1][n+1];
		memset(F, 0, sizeof(F));
		for(int i = 1; i <= n; i++){
// 			F[i][i] = (s[i-1] - '0');
// 			sum += F[i][i];
//			cout << sum << endl;
			for(int j = i; j <= n; j++){
				F[i][j] = F[i][j-1] * 10 + (s[j-1] - '0');
				sum += F[i][j];
//				cout << sum << endl;
			}
		}
		cout << sum << endl;
	}
}