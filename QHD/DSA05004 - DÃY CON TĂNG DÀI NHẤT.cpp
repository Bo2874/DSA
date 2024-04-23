#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int F[n+1];
	memset(F, 0, sizeof(F));
		F[0] = 1;
		for(int i = 1; i <= n; i++){
			F[i] = 1;
			for(int j = 1; j < i; j++){
				if(a[j] < a[i]){
					F[i] = max(F[i], F[j] + 1);
				}
			}
//			cout << F[i] << endl;
		}
		cout << *max_element(F+1, F+n+1) << endl;
}