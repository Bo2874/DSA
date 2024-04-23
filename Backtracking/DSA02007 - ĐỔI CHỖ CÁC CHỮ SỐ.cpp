#include <bits/stdc++.h>
using namespace std;
#define ll long long

int k, n;
string res;
void Try(int i, string cur_str,int cnt){
	if(cnt > k || i > n) return;
	res = max(res, cur_str); // check sâu lớn nhất ở các lần thử
	char max_val = cur_str[i];
	for(int j = i+1; j <= n; j++){
		max_val = max(max_val, cur_str[j]);
// Tìm thằng lớn nhất đằng sau nó sẽ được điền vào cái vị trí i này
	}
	if(max_val == cur_str[i]) Try(i+1, cur_str, cnt); // nó là lớn nhất sẵn r thì tìm sang vị trí khác
	else{
		for(int j = i+1; j <= n; j++){
			if(cur_str[j] == max_val){
				string tmp = cur_str;
				swap(tmp[i], tmp[j]);
// do có nhiều cái lớn nhất có thể điền vào nên mình phải thử từng vị trí xem vị trí nào tạo ra sâu lớn nhất (test : 4355)
				Try(i+1, tmp, cnt+1);
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> k >> s;
		n = s.size();
		s = "0" + s;
		res = s;
		Try(1, s, 0);
		for(int i = 1; i <= n; i++){
			cout << res[i];
		}
		cout << endl;
	}
}