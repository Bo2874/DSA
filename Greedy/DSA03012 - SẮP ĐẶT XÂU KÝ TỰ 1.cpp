#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map <char, int> mp;
		for(int i = 0 ; i < s.size(); i++) mp[s[i]]++;
		int max_val = 0;
		for(int i = 0 ; i < s.size() ; i++){
			max_val = max(max_val, mp[s[i]]);
		}
		if(s.size() % 2 == 0 && max_val <= s.size()/2 || s.size() % 2 != 0 && max_val <= s.size()/2 + 1) cout << 1 << endl;
		else cout << -1 << endl;
	}
}