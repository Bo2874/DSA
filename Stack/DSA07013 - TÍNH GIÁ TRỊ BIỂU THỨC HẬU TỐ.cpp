#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <int> st;
		int res = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
				int tmp1 = st.top();
				st.pop();
				int tmp2 = st.top();
				st.pop();
				if(s[i] == '*') res = tmp2 * tmp1;
				else if(s[i] == '/') res = tmp2/tmp1;
				else if(s[i] == '+') res = tmp2 + tmp1;
				else res = tmp2 - tmp1;
				st.push(res);
			}
			else {
				st.push(s[i] - '0');
			}
		}
		cout <<res << endl;
	}
}