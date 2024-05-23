#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){ // test đặc biệt 4 9 2 7 9 10 -> 9 10 7 9 10 -1
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int b[n]; 
		for(int i = 0; i < n; i++) cin >> a[i];
		stack <int> st;
		st.push(0);
		for(int i = 1; i < n; i++){
			if(a[i] > a[st.top()]){
				while(!st.empty() && a[i] > a[st.top()]){
					b[st.top()] = a[i];
					st.pop(); // chỉ số nào đã được lưu rồi thì pop nó ra để thử các chỉ số tiếp theo của stack	
				}
				st.push(i);				
			}
			else {
				b[i-1] = -1; // tạm thời tại chỉ số i-1 thì chưa có giá trị nào lớn hơn nó
				st.push(i);
			}
		}
		b[n-1] = -1; // số cuối cùng thì kh có số nào ở bên phải lớn hơn nó
		for(int i = 0; i < n; i++) cout <<b[i]<<" ";
		cout << endl;
	}
}