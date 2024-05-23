#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		queue <string> q;
		q.push("1");
		cout << 1 <<" ";
		for(int i = 2; i <= n; i++){
			string tmp = q.front();
			int ok = -1;
			for(int j = tmp.size()-1; j >= 0; j--){
				if(tmp[j] == '0'){
					ok = j;
					tmp[j] = '1';
					break;
				}
				else tmp[j] = '0';
			}
			if(ok == -1) {
				tmp = "1" + tmp;
			}
			cout << tmp << " ";
			q.pop();
			q.push(tmp);
		}
		cout <<endl;
	}
}