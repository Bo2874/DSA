#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, s; cin >> n >> s;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		vector <bool> F(s + 1, false); 
		F[0] = true;
		for(int i = 0; i < n; i++){
			for(int j = s; j >= a[i]; j--){
			    // duyệt ngược bản chất là để không bị dùng a[i] nhiều lần
				if(F[j - a[i]]){ // đánh dấu tại a[i] bất kì luôn ít nhất có tổng là chính nó (a[i] thuộc 0 tới s)
					F[j] = true;
				// 	cái sum nào sẽ được hình thành tại vị trí a[i]
				}
			}
		}
		// đánh dấu từ 0 đến s, nói chung cái sau dựa vào cái trước 
		if(F[s]) cout << "YES\n";
		else cout << "NO\n";
	}
}