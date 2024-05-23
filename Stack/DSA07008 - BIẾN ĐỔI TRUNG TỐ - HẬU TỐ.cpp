#include <bits/stdc++.h>
using namespace std;
#define ll long long

//TEST DAC BIET: (A+B)-C*(D/E)+F

int uutien(char c){
	if(c == '+' || c == '-') return 1;
	else if(c == '*' || c == '/') return 2;
	else if(c == '^') return 3;
	return 0;
}
int main(){ 
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <char> st;
		string res = "";
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') st.push(s[i]);
			else if(isalpha(s[i])){
				res += s[i];
			}
			else if(s[i] == ')'){
				while(st.top() != '('){
					res += st.top();
					st.pop();
				}
				st.pop();
			}
			else {
				while(!st.empty() && uutien(st.top()) >= uutien(s[i])){
					res += st.top();
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while(!st.empty()){
			res += st.top();
			st.pop();
		}
		cout << res << endl;
	}
}