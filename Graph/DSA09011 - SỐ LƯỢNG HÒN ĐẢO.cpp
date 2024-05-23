#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int n, m;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
void loang(int i, int j){
	for(int k = 0; k < 8; k++){
		int i1 = i + dx[k], j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1]){
			a[i1][j1] = 0;
			loang(i1, j1);
		}
	}
}
int main(){
	int z; cin >> z;
	while(z--){
		cin >> n >> m;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++) {
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j<= m; j++){
				if(a[i][j]){
					cnt++;
					loang(i, j);
				}
			}
		}
		cout << cnt << endl;
	}
}
DSA09011 - SỐ LƯỢNG HÒN ĐẢO