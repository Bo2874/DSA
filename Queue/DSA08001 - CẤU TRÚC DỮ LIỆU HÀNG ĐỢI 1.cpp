#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		queue <int> qq;
		int q; cin >> q;
		while(q--){
			int x; cin >> x;
			if(x == 1){
				cout << qq.size() << endl;	
			}
			else if(x == 2){
				if(qq.empty()) cout <<"YES\n";
				else cout <<"NO\n";
			}
			else if(x == 3){
				int y; cin >> y;
				qq.push(y);
			}
			else if(x == 4){
				if(!qq.empty()) qq.pop();
			}
			else if(x == 5){
				if(!qq.empty()){
					cout << qq.front() << endl;
				}
				else cout << -1 << endl;
			}
			else {
				if(!qq.empty()){
					vector <int> v;
					while(!qq.empty()){
						v.push_back(qq.front());
						qq.pop();
					}
					cout << v[v.size()-1] << endl;
					for(int i = 0; i < v.size(); i++){
						qq.push(v[i]);
					}
				}
				else cout << -1 << endl;
			}
		}
	}
}