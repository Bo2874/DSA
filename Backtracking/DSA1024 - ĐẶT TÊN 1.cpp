#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, X[100];
string b[100];
void kq(){
	for(int i = 1; i <= k ; i++) cout << b[X[i]] <<" ";
	cout << endl;
}
void Try(int i){
	for(int j = X[i-1] + 1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k) kq();
		else Try(i+1);
	}
}
int main(){
	cin >> n >> k;	
	scanf("\n");
	string s;
	getline(cin,s);
	set <string> se;
	string tmp;
	stringstream ss(s);
	while(ss >> tmp) se.insert(tmp);
	int i = 1;
	for(auto it : se){
		b[i] = it;
		i++;
	}
	n = se.size();
//	for(int j = 1; j < i ; j++) cout << b[j] <<" ";
	cout << endl;
	Try(1);
}