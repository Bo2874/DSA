#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <string> v;
		queue <string> q;
		q.push("6");
		while(q.front().size() <= n){
			string tmp = q.front();
			int ok = -1;
			for(int i = tmp.size()-1; i >= 0; i--){
				if(tmp[i] == '6'){
					tmp[i] = '8';
					ok = i;
					break;
				}
				else tmp[i] = '6';
			}
			if(ok == -1) tmp = "6" + tmp;
			v.push_back(q.front());
			q.pop();
			q.push(tmp);
		}
		for(int i = v.size() - 1; i >= 0; i--){
			cout << v[i] <<" ";
		}
		cout << endl;
	}
}