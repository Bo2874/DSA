#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <int> st;
		int res = 0;
		for(int i = s.size() - 1; i >= 0; i--){
			if(isdigit(s[i])){
				st.push(s[i] - '0');
			}
			else{
				int tmp1 = st.top();
				st.pop();
				int tmp2 = st.top();
				st.pop();
				if(s[i] == '/') res = tmp1/tmp2;
				else if(s[i] == '*') res = tmp1*tmp2;
				else if(s[i] == '+') res = tmp1 + tmp2;
				else res = tmp1 - tmp2;
				st.push(res);
			}
		}
		cout << res << endl;
	}
}