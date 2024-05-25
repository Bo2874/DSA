#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		int d; cin >> d;
		string s; cin >> s;
		int n = s.size();
		map <char, int> mp;
		for(int i = 0; i < n; i++){
			mp[s[i]]++;
		}
		int m = 0;
		for(int i = 0; i < n; i++){
			m = max(m, mp[s[i]]);
		// tìm số lần xuất hiện nhiều nhất của 1 kí tự nào đó
		}
	// nếu tổng số kí tự để lấp vào m-1 khoảng, với mỗi khoảng là d-1 mà <= số lượng kí tự còn lại khác 
	// -> tồn tại cách xếp các ký tự trong s để tất cả các ký tự giống nhau đều có khoảng cách là d
		if((d-1) * (m-1) <= n - m) cout << 1 << endl;
		else cout << -1 << endl;
	}
}