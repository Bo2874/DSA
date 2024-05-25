#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,a[100],final = 0;
void init(){
	for(int i = 1; i <= n ; i++) a[i] = i;
}
void sinh(){
	int i = n-1;
	while(a[i] > a[i+1] && i >= 1) i--;
	if(i == 0) final = 1;
	else{
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
	
}
void in(){
	for(int i = 1 ; i <= n ; i++) cout << a[i];
	cout <<" ";
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