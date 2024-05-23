#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		scanf("\n");
		string s; getline(cin, s);
		stack <char> st;
		int ok = 0;
		for(int  i = 0; i < s.size(); i++){
			if(s[i] == ')'){
				ok = 0;
				int tmp = st.top();
				while(tmp != '('){
					if(tmp == '-' || tmp == '+' || tmp == '*' || tmp == '/'){
						ok = 1;
					}
					st.pop();
					tmp = st.top();
				}
				st.pop();
				if(ok == 0) break;
			}
			else st.push(s[i]);
		}
		if(ok == 0) cout << "Yes\n";
		else cout << "No\n";
	}
}