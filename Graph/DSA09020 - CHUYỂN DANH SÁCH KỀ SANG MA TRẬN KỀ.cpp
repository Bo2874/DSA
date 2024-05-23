#include <bits/stdc++.h>
using namespace std;

int adj[1001][1001];
int main(){
	int n; cin >> n;
	scanf("\n");
	for(int i = 1; i <= n; i++){
		string s; getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			adj[i][stoi(tmp)] = 1;
//			cout << i <<" ";
		}
	}
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n; j++) cout << adj[i][j] <<" ";
		cout << endl;
	}
}