#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	int n; cin >> n;
	cin.ignore();
	vector <pair<int,int>> v;
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			if(stoi(tmp) > i) v.push_back({i, stoi(tmp)});
		}
	}
// 	sort(v.begin(), v.end());
	for(auto it : v){
		cout << it.first <<" "<< it.second << endl;
	}
}