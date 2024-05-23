#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		stack <int> st;
		st.push(-1);// tạo cơ sở ban đầu
		int res = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '('){
				st.push(i);
			}
			else{
				st.pop();
				if(!st.empty()) res = max(res, i-st.top()); // cập nhật dãy con lớn nhất
				else st.push(i); //nếu mà st rỗng thì phải thêm i để thế vào -1 đã xóa, tạo cơ sở mới để bắt đầu tính toán dãy con mới
			}
		}
		cout << res << endl;
	}
}