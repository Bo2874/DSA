#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		string s;cin >> s;
		int tmp = 0;
		for(int i = s.size() - 1; i >= 0 ; i--){
			if(s[i] == '0'){
				s[i] = '1';
				tmp = i+1;;
				break;
			}	
		}
		for(int i = tmp ; i < s.size() ; i++) s[i] = '0';
		cout << s << endl;
	}	
}