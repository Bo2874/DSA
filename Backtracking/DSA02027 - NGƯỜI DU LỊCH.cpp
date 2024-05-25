#include <bits/stdc++.h>
using namespace std;

int n, X[100], C[100][100], ans = 1e9;
bool visited[100];
void Try(int i, int sum){
	for(int j = 2; j <= n ; j++){
		if(visited[j] == false){
		visited[j] = true;
		X[i] = j;
		if(i == n) ans = min(ans, sum + C[X[i-1]][X[i]] + C[X[i]][1]); // cộng thêm 1 lần từ đỉnh cuối vòng về 1
		else if(sum + C[X[i-1]][X[i]] < ans) Try(i+1, sum + C[X[i-1]][X[i]]);
	    // nếu cái kq này bé hơn kq trước đó thì mới thử tiếp
		visited[j] = false;
		}
	}
}
int main(){
	cin >> n;
// 	n là số lượng thành phố
	for(int i = 1; i <= n ;i++){
		for(int j = 1; j <= n ; j++){
			cin >> C[i][j];
		}
	}
	X[1] = 1;
	Try(2, 0);
	cout << ans;
	
}
