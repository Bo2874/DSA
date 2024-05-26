#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a > b;
}
int main(){
		int n; cin >> n;
		int a[n+1];
		for(int i = 1 ; i <= n ; i++) cin >> a[i];;
		vector <int> v1;
		vector <int> v2;
		for(int i = 1 ; i <= n ; i+=2) v1.push_back(a[i]);
		for(int i = 2; i <= n ; i+=2) v2.push_back(a[i]);
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end(),cmp);
		for(int i = 0 ; i < v2.size() ; i++){
			cout << v1[i] <<" " << v2[i] <<" ";
		}
		if( n % 2 != 0) cout << v1[v1.size()-1];
		cout << endl;
}