#include <bits/stdc++.h>
using namespace std;

int p[1000001];
void sang(){
	p[0] = p[1] = 1;
	for(int i = 2; i <= sqrt(1000000) ; i++){
		if(p[i] == 0){
			for(int j = i*i ; j <= 1000000 ; j += i){
				p[j] = 1;
			}
		}
	}
}
int main(){
	int t ; cin >> t;
	while(t--){
		sang();
		int n; cin >> n;
		int ok = 1;
		for(int i = 2 ; i <= n/2; i++){
			if(p[i] == 0 && p[n-i] == 0){
				cout << i << " " << n-i << endl;
				ok = 0;
				break;
			}
		}
		if(ok) cout <<"-1\n";
	}
}