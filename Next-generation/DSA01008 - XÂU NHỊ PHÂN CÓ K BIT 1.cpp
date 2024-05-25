#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, final = 0, a[100];
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
	int cnt = 0;
	for(int i = 1; i <= n ;i++){
		if(a[i] == 1) cnt++;
	}
	if(cnt == k){
		for(int i = 1; i <= n ; i++) cout << a[i];
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		final = 0;
		cin >> n >> k;
		init();
		while(!final){
			in();
			sinh();
		}
	}
}