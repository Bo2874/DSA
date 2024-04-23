#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string a, b; cin >> a >> b;
		a = ' ' + a;
		b = ' ' + b;
		int n = a.size(), m = b.size();
		int F[n+1][m+1];
		for(int i = 0; i <= n; i++){
			F[i][0] = i; // số cách mà đưa số lượng xâu i về 0
		}
		for(int j = 0; j <= m; j++){
			F[0][j] = j; // số cách đưa xâu 0 về xâu có độ dài i 
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(a[i] != b[j])
				F[i][j] = min({F[i-1][j] + 1, F[i][j-1] + 1, F[i-1][j-1] + 1}) ;
				//1: xóa bớt ở xâu i
				//2: chèn thêm ở xâu i
				//3: thay thế ở xâu i
				// CODE CHẠY TỪ XÂU I J BAN ĐẦU SO SÁNH VỚI NHAU ĐỂ BIẾT NÊN DÙNG CÁI NÀO TRONG 3 CÁI, RỒI CHẠY DẦN DẦN VỀ CUỐI DÃY
				else F[i][j] = F[i-1][j-1];
			}
		}
		cout << F[n][m] << endl;
	}
}