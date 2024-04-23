#include <bits/stdc++.h>
using namespace std;

int n, k, X[100];
string b[100];
void in(){
	for(int i = 1; i <= k ; i++) cout << b[X[i]] <<" ";
	cout << endl;
}
void Try(int i){
	for(int j = X[i-1] + 1; j <= n-k+i ; j++){
		X[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}
int main(){
	cin >> n >> k;
	scanf("\n");
	string s; getline(cin,s);
	stringstream ss(s);
	string tmp;
	set <string> se;
	while(ss >> tmp){
		se.insert(tmp);
	}
	int i = 1;
	for(auto it : se){
		b[i] = it;
		i++;
	}
	n = se.size();
	Try(1);
}