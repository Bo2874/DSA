#include<bits/stdc++.h>
using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int left[100001] = {0}; // Lưu vị trí lớn hơn đầu tiên từ bên trái về của i
		stack <int> st; 
		st.push(1);
		left[1] = 0;
		for(int i = 2; i <= n; i++){
			if(a[i] < a[st.top()]){
				left[i] = st.top();
				st.push(i);
			} 
			else{
				while(!st.empty() && a[i] >= a[st.top()]){
					st.pop();
				// đưa về chỉ số đầu tiên lớn hơn a[i]
				}
				if(!st.empty()) left[i] = st.top();
				else left[i] = 0; // nếu tất cả các chỉ số trong stack đều bé hơn thì cho left[i] = 0
				st.push(i);
			}
		}
		for(int i = 1; i <= n; i++){
			cout << i-left[i] <<" "; 
		}
		cout << endl;
	}
}