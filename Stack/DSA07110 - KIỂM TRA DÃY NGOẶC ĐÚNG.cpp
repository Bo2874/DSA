#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <char> st;
		int ok = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '[' || s[i] == '{' || s[i] == '('){
				st.push(s[i]);
			}
			else{
				if(st.empty()){
				    ok = 1;
				    break;
				}
				if(s[i] == ']' && st.top() == '[') st.pop();
				else if(s[i] == '}' && st.top() == '{') st.pop();
				else if(s[i] == ')' && st.top() == '(') st.pop();
				else {
					ok = 1;
					break;
				}
			}
		}
		if(ok == 0) cout << "YES\n";
		else cout <<"NO\n";
	}
}