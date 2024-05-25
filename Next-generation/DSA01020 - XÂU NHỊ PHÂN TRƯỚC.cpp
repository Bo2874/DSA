#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int i = s.size()-1;
		while(s[i] == '0') i--;
		if(i >= 0) s[i] = '0';
		for(int j = i + 1; j < s.size() ; j++) s[j] = '1';
		cout << s << endl;
	}
}