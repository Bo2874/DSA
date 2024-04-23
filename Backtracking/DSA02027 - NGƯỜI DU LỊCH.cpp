#include <bits/stdc++.h>
using namespace std;

int n, X[100], C[100][100], ans = 1e9, cmin = 1e9;
bool visited[100];
void Try(int i, int sum){
	for(int j = 2; j <= n ; j++){
		if(visited[j] == false){
		visited[j] = true;
		X[i] = j;
		sum += C[X[i-1]][X[i]];
		if(i == n) ans = min(ans, sum + C[X[n]][1]);
		else if(sum + (n-i)*cmin < ans) Try(i+1, sum);
		visited[j] = false;
		sum -= C[X[i-1]][X[i]];
		}
	}
}
int main(){
	cin >> n;
// 	n là số lượng thành phố
	for(int i = 1; i <= n ;i++){
		for(int j = 1; j <= n ; j++){
			cin >> C[i][j];
			if(C[i][j]) cmin = min(cmin, C[i][j]);
		}
	}
	X[1] = 1;
	Try(2, 0);
	cout << ans;
	
}