#include <bits/stdc++.h>
using namespace std;
#define pb push_back

// PRIM
int n, m, d = 0;
vector <pair<int,int>> adj[10001];
bool used[10001]; // true : i thuoc V(H), false : i thuoc V
struct canh{
	int x, y, w;
};
void nhap(){
	cin >> n >> m;
	d = 0;
	for(int i = 0 ; i < 10001; i++) adj[i] = {};
	memset(used, false, sizeof(used));
	for(int i = 0; i < m; i++){
		int x, y, w; cin >> x >> y >> w;
		adj[x].pb({y,w});
		adj[y].pb({x,w});
	}
	
}
void prim(int u){
	vector <canh> T;
	used[u] = true;
	while(T.size() < n-1){
//		e = (u, v);//Cạnh có độ dài nhỏ nhất với u thuoc V, v thuoc VH
		int min_w = INT_MAX;
		int X, Y; // lưu 2 đỉnh của cạnh e
		for(int i = 1; i <= n; i++){
		// nếu đỉnh i thuộc tập V(H)
			if(used[i]){
				for(pair<int, int> it : adj[i]){
					int j = it.first, trongso = it.second;
					if(!used[j] && trongso < min_w){
						min_w = trongso; 
						X = j, Y = i;;
						// tìm trọng số nhỏ nhất giữa 2 tập đỉnh
					} 
				}
			}
		}
		T.pb({X,Y,min_w});
		d += min_w;
		used[X] = true; // Loại đỉnh X khỏi V, thêm vào V(H)
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		nhap();
		prim(1);
		cout << d << endl;
	}
}