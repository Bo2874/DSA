#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <char> st;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == ')'){
				if(!st.empty()){
					if(st.top() != ')') st.pop();
					else st.push(s[i]);
				} // LOẠI CÁC CẶP NGOẶC THỎA MÃN 
				else st.push(s[i]);
			}
			else st.push(s[i]);
		}
		int cnt1 = 0, cnt2 = 0;
		while(!st.empty()){
			if(st.top() == '(') cnt1++;
			else cnt2++;
			st.pop();
		}
		if(cnt1 % 2 == 0 && cnt2 % 2 == 0) cout << (cnt1+cnt2)/2; 
		else cout << (cnt1+cnt2)/2 + 1;
		cout << endl;
	}
}