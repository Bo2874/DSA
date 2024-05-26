#include <bits/stdc++.h>
using namespace std;

int x[1000000];
int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		x[a[i]]++;
	}
	for(int i = 0 ; i < n ; i++){
		if(x[a[i]] != 0){
			cout << a[i] <<" ";
			x[a[i]] = 0;
		}
	}
}