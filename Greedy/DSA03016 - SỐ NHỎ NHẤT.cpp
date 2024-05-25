#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int s, d; cin >> s >> d;
		if(d*9 < s ){
			cout << -1 << endl;
			continue;
		}
		else{
			int a[d];
			s--;
			for(int i = d-1; i >= 0; i--){
			if(s >= 9){
				s -= 9;
				a[i] = 9;
			}
			else {
				a[i] = s;
				s = 0;
			}
			}
			a[0]++;
			for(int i = 0;i < d; i++) cout << a[i];
			cout << endl;
		}
	}
}