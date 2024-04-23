#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,X[100];
bool used[100];
char a[100];
void kq(){
	for(int i = 1; i <= n; i++) cout << a[X[i]];
	cout <<" ";
}
void Try(int i){
	for(int j = 1; j <= n ; j++){
		if(used[j] == false){
			X[i] = j;
			used[j] = true;
			if(i == n) kq();
			else Try(i+1);
			used[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		for(int i = 0 ; i < s.size() ; i++) a[i+1] = s[i];
		n = s.size();
		Try(1);
		cout << endl;
	}
}