#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(s[0] == '0'){
			cout << 0 << endl;
			continue;
		}
		int n = s.size();
		s = " " + s;
		int F[100];
		F[0] = 1;
		F[1] = 1;
		for(int i = 2; i <= n; i++){
			F[i] = 0;
			if(s[i] != '0') F[i] += F[i-1]; // ghép thêm 1 kí tự vào các cách tạo nên ở vị trí i-1 nếu được
			if(s[i-1] == '1' || (s[i-1] == '2' && s[i] <= '6')) F[i] += F[i-2]; // 1 với số nào thì cũng ghép đc còn 2 thì chỉ từ 20 -> 26
			// ghép thêm cụm 2 kí tự vào các cách tạo nên vị trí i-2 nếu được
		}
		cout << F[n] << endl;
	}
}