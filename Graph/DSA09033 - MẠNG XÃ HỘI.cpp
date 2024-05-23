#include <bits/stdc++.h>
using namespace std;
int n, m, cnt = 0;
bool used[100005];
vector <int> ke[100005];
void nhap(){
	memset(used, false, sizeof(used));
	for(int i = 0; i < 1e5 + 1; i++){
		ke[i] = {};
	}
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}
void DFS(int u){
	cnt++;
	used[u] = true;
	for(int x : ke[u]){
		if(!used[x]){
			DFS(x);
		}
	}
}
int main(){
	int l; cin >> l;
	while(l--){
		nhap();
		long long res = 0;
		for(int i = 1; i <= n; i++){
			if(!used[i]){
				cnt = 0;
				DFS(i);
				res += 1ll*cnt*(cnt-1)/2; // công thức tính tổ hợp để tìm ra số cạnh tối đa (chọn 2 đỉnh trong cnt đỉnh trong thành phần liên thông)
				// C2 của cnt
			}
		}
		if(res == m) cout << "YES\n"; // Nếu mà tổng tất cả các cạnh tối đa của thành phần liên thông mà bằng số cạnh đầu bài cho thì hoàn hảo
		else cout <<"NO\n";
	}
}