#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t ;
	while(t--){
		int n; cin >> n;
		string s[10000];
		int l = pow(2,n);
		s[1] = "0";
		s[2] = "1";
		//xây từ bit 1 trở đi
		if(n > 1){
			for(int i = 2; i <= n; i++){
				int k = pow(2,i);
				for(int j = 1; j <= k/2; j++){
					s[k-j+1] = "1" + s[j];
		// ví dụ với i = 3, sẽ xây theo s[8] - s[1], s[7] - s[2], s[6] - s[3], s[5] - s[4]
					s[j] = "0" + s[j];
				}
			}
		}
		for(int j = 1; j <= l; j++) cout << s[j] <<" ";
		cout << endl;
	}
}