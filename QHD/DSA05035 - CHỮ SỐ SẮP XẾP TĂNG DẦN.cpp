#include <bits/stdc++.h>
using namespace std;
#define ll long long

int mod = 1e9 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll F[105][105];
		F[1][0] = 1;
		for(int j = 1; j <= 9; j++){
			F[1][j] = F[1][j-1] + 1;
		}
		for(int i = 2; i <= n; i++){
			F[i][0] = F[i-1][9];
			for(int j = 1; j <= 9; j++){
				F[i][j] = F[i][j-1];
				F[i][j] += F[i-1][9] - F[i-1][j-1]; // lấy số cách lớn nhất của i-1 cs trừ đi số cách không thể là j-1 (do xây tăng dần nên chỉ cần trừ đi chỗ j-1 là trừ được hết từ 0 đến j-1)
				// j tăng thì F[i][j] sẽ tăng dần lên(kế thừa dần lên)
//		tại số lượng chữ số i mà xếp số j lên đầu số lượng chữ số i-1 thì được bao nhiêu cách -> cộng dồn các cách dần dần lên
			}
		}
		cout << F[n][9]%mod << endl;
	}
}