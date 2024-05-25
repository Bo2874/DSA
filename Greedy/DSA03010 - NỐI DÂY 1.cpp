#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		priority_queue <ll, vector <ll>, greater<ll>> pq;
		int x;
		for(int i = 0; i < n; i++) {
			cin >> x;
			pq.push(x);
		}
		ll sum = 0;
		while(pq.size() > 1){
			int a = pq.top();
			pq.pop();
			int b = pq.top();
			pq.pop();
			pq.push(a+b);
			sum += (a+b);
		}
		cout << sum << endl;
	}
}