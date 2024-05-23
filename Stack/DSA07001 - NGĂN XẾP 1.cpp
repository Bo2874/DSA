#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
	string s;
	stack <int> st;
	while(cin >> s){
		if(s == "push"){
			int x; cin >> x;
			st.push(x);
		}
		else if(s == "show"){
			if(st.empty()) cout << "empty";
			vector <int> v;
			while(!st.empty()){
				int a = st.top();
				st.pop();
				v.pb(a);
			}
			for(int i = v.size()-1 ; i >= 0; i--){
				cout << v[i] <<" ";
				st.push(v[i]);
			}
			cout << endl;
		}
		else st.pop();
	}
}