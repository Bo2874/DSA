#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		scanf("\n");
		string s;
		getline(cin,s);
		stack <string> st;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			st.push(tmp);
		}
		while(!st.empty()){
			cout << st.top() <<" ";
			st.pop();
		}
		cout << endl;
	}
}