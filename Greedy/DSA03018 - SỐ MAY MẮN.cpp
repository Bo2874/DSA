#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int u = n/7,tmp = -1,tmp1 = u;
		for(int i = u; i >= 0; i--){
			if( (n - i*7) % 4 == 0){
				tmp = (n - i*7)/4;
				tmp1 = i;
				break;
			}
		}
		if(tmp != -1) {
			for(int i = 1; i <= tmp; i++) cout << 4;
			for(int i = 1; i <= tmp1; i++) cout << 7;
		}
		else cout << tmp;
		cout << endl;
	}
}