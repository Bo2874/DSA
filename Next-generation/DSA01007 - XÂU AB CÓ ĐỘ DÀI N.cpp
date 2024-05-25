#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, final = 0, a[100];
void init(){
	for(int i = 1; i <= n ; i++) a[i] = 0;
}
void sinh(){
	int i = n;
	while(a[i] == 1) i--;
	if(i == 0) final = 1;
	else {
		a[i] = 1;
		for(int j = i+1; j <= n ; j++) a[j] = 0;
	}
}
void in(){
	for(int i = 1; i <= n ;i++){
		if(a[i] == 1) cout <<"B";
		else cout <<"A";
	}
	cout << " ";
}
int main(){
	int t; cin >> t;
	while(t--){
		final = 0;
		cin >> n;
		init();
		while(!final){
			in();
			sinh();
		}
		cout << endl;
	}
}