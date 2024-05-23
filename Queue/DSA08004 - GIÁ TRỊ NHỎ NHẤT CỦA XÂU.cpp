#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int k; cin >> k;
		string s; cin >> s;
		map <char, int> mp;
		for(int i = 0; i < s.size(); i++) {
			mp[s[i]]++;
		}
		priority_queue <int> pq;
		for(int i = 0; i < s.size(); i++){
			if(mp[s[i]] != 0) {
				pq.push(mp[s[i]]);
				mp[s[i]] = 0;
			}
		}
		while(k > 0 && !pq.empty()){
			int tmp = pq.top();
			pq.pop();
			tmp--;
			if(tmp != 0) pq.push(tmp);
			k--;
		}
		long long sum = 0;
		while(!pq.empty()){
			int x = pq.top();			
			sum += (1ll*x*x);
			pq.pop();
		}
		cout <<sum << endl;
	}
}