#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		priority_queue <int, vector<int>, greater<int>> pq;
		for(int i = 0 ; i < n ; i++){
			int x; cin >> x;
			pq.push(x);
		}
		int sum = 0;
		while(pq.size() > 1){
			int a = pq.top();
			pq.pop();
			int b = pq.top();
			pq.pop();
			int tmp = ((a%mod)+(b%mod)) % mod;
			sum += tmp;
			sum = sum % mod;
			pq.push(tmp);
		}
		cout << sum << endl;
	}
}