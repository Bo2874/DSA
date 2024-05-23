#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		queue <string> q;
		q.push("1");
		long long cnt = 0;
		while(stoll(q.front()) <= stoll(s)){
			string tmp = q.front();
			int ok = -1;
			for(int j = tmp.size()-1; j >= 0; j--){
				if(tmp[j] == '0'){
					tmp[j] = '1';
					ok = j;
					break;
				}
				else tmp[j] = '0';
			}
			if(ok == -1) tmp = "1" + tmp;
			cnt++;
			q.pop();
			q.push(tmp);
		}
		cout << cnt << endl;
	}
}