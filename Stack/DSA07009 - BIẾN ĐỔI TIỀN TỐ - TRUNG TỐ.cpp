#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <string> st;
		for(int i = s.size()-1; i >= 0; i--){
			if(isalpha(s[i])){
				st.push(string(1, s[i]));
			}
			else{
				string tmp1 = st.top();
				st.pop();
				string tmp2 = st.top();
				st.pop();
				string tmp = "(" + tmp1 + s[i] + tmp2 +")";
				st.push(tmp);
			}
		}
		cout << st.top() << endl;
	}
}