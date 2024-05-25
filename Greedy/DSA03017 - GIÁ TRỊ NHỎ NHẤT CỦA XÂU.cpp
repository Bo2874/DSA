#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int k; string s;
		cin >> k >> s;
		map <char, int> mp;
		for(int i = 0; i < s.size(); i++) mp[s[i]]++;
		priority_queue <int> pq;
		for(int i = 0; i < s.size(); i++){
			if(mp[s[i]] != 0){
				pq.push(mp[s[i]]);
				mp[s[i]] = 0;
			}
		}
		while(k--){
			int x = pq.top();
			if(x != 0){
				pq.pop();
				x--;
				pq.push(x);
			}
			else break;
		}
		ll sum = 0;
		while(!pq.empty()){
			int x = pq.top();
			pq.pop();
			sum += x*x;
		}
		cout << sum << endl;
	}
}