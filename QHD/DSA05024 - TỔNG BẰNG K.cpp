#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int F[k+1];
		memset(F, 0, sizeof(F));
		F[0] = 1; // để đánh dấu bất kì cái a[i] nào <= k đều có thể có số cách tạo thành ít nhất là 1
		for(int i = 1; i <= k; i++){
			// xây dựng dần dần các số từ 1 đến k (các cách tạo nên được số đó)
			for(int j = 1; j <= n; j++){
				if(a[j] <= i){
					F[i] += (F[i - a[j]]);
					F[i] %= mod;
				}
			}
		}
		cout << F[k] << endl;
	}
}