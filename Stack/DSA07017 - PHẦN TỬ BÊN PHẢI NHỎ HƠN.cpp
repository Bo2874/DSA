#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){ 
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n], c[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		stack <int> st1;
		// tìm phần tử đầu tiên lớn hơn bên phải
		for(int i = 0; i < n; i++){
			while(!st1.empty() && a[i] > a[st1.top()]){
				b[st1.top()] = i;
				st1.pop();
			}
			st1.push(i);
		}
		while(!st1.empty()){
			b[st1.top()] = -1;
			st1.pop();
		}
		stack <int> st2;
		// tìm phần tử đầu tiên nhỏ hơn bên phải
		for(int i = 0; i < n; i++){
			while(!st2.empty() && a[i] < a[st2.top()]){
				c[st2.top()] = i;
				st2.pop();
			}
			st2.push(i);
		}
		while(!st2.empty()){
			c[st2.top()] = -1;
			st2.pop();
		}
// bản chất khi tìm cái phần tử nhỏ hơn cái lớn hơn, thì chắc chắn sẽ chỉ đc vào các chỉ số đã lưu ở mảng b, nên sẽ tìm được chỉ số nhỏ hơn ở chỉ số đấy
		for(int i = 0; i < n; i++){
			if(b[i] == -1 || c[b[i]] == -1) cout << -1 <<" "; // 1 trong 2 cái kh có thì in ra -1
			else cout << a[c[b[i]]] <<" ";
		}
		cout << endl;
	}
}