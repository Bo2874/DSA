#include <bits/stdc++.h>
using namespace std;

int n,x[100];
vector <vector<int>> v;
bool cmp(int a, int b){
	return a > b;
}
bool cmp1(vector<int> x, vector<int> y){
	return x > y;
}
void Try(int i,int sum, int bd){
	for(int j = bd; j <= n; j++){
		if(sum + j <= n){
			x[i] = j;
			if(sum + x[i] == n){
				vector <int> l;
				for(int u = 1; u <= i; u++) l.push_back(x[u]);
				sort(l.begin(), l.end(), cmp);
				v.push_back(l);
			}
			else Try(i+1, sum + x[i], j);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		v = {};
		cin >> n;		
		Try(1,0,1);
		sort(v.begin(), v.end(), cmp1);
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++){
			cout <<"(";
			for(int j = 0; j < v[i].size()-1; j++){
				cout << v[i][j] <<" ";
			}
			cout << v[i][v[i].size()-1];
			cout <<")";
			cout << " ";
		}
		cout << endl;
	}
}