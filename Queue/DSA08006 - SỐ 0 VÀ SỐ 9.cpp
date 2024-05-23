#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue <string> q;
		q.push("9");
		while(true){
			string tmp = q.front();
			int ok = -1;
			for(int i = tmp.size()-1; i >= 0; i--){
				if(tmp[i] == '0'){
					tmp[i] = '9';
					ok = i;
					break;
				}
				else tmp[i] = '0';
			}
			if(ok == -1) tmp = "9" + tmp;
			if(stoll(q.front()) % n == 0){
				cout << q.front() << endl;
				break;
			}
			q.pop();
			q.push(tmp);
		}
	}
}