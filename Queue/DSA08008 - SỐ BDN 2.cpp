#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		queue <string> q;
		q.push("1");
		while(true){
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
			if(stoll(q.front()) % n == 0) {
				cout << q.front() << endl;
				break;
			}
			q.pop();
			q.push(tmp);
		}// duyệt tất cả xâu nhị phân để xem xâu nào chia hết cho n
	}
}