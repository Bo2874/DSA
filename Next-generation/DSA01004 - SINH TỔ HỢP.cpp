#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k,final = 0;
int a[100];
void init(){
	for(int i = 1; i <= k ; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(a[i] == n+i-k){
		i--;
	}
	if(i == 0) final = 1;
	else a[i]++;
	for(int j = i+1 ; j <= k ; j++) a[j] = a[j-1]+1;
}
void in(){
	for(int i = 1; i <= k ; i++) cout << a[i];
	cout <<" ";
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
		cout <<endl;
	}
}