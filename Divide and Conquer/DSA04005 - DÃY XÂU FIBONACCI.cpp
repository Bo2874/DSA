#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll F[100];
void ktao(){
	F[1] = F[2] = 1;
	for(int i = 3; i <= 92; i++){
		F[i] = F[i-2] + F[i-1];
	} 
}
char find(ll n, ll k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= F[n-2]) return find(n-2,k);
	else return find(n-1, k - F[n-2]);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		ktao();
		cout << find(n,k) << endl;
	}
}