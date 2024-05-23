#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){ 
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], left[n], right[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stack <int> st1;
		// tìm phần tử đầu tiên bé hơn bên phải
		for(int i = 0; i < n; i++){
			while(!st1.empty() && a[i] < a[st1.top()]){
				right[st1.top()] = i;// cái nào được đánh dấu mới pop ra
				st1.pop();
			}
			st1.push(i);
		}
		while(!st1.empty()){
			right[st1.top()] = n;
			st1.pop();
		}
		stack <int> st2;
		// tìm phần tử đầu tiên bé hơn bên trái
		for(int i = n-1; i >= 0; i--){
			while(!st2.empty() && a[i] < a[st2.top()]){
				left[st2.top()] = i;
				st2.pop();
			}
			st2.push(i);
		}
		while(!st2.empty()){
			left[st2.top()] = -1;
			st2.pop();
		}
		long long res = 0;
		for(int i = 0; i < n;i++){
			// mỗi cái a[i] là chiều cao
			long long dientich = 1ll * a[i] * (right[i] - left[i] - 1);
			res = max(res, dientich); // chiều dài * chiều cao
		}
		cout << res << endl;
	}
}