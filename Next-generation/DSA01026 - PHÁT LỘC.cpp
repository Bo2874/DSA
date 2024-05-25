#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,a[100],final = 0;
void init(){
	for(int i = 1; i <= n ; i++) a[i] = 0;
}
void sinh(){
	int i = n;
	while(a[i] == 1) i--;
	if(i == 0) final = 1;
	else{
		a[i] = 1;
		for(int j = i+1 ; j <= n ; j++) a[j] = 0;
	}
}
void in(){
	for(int i = 1; i <= n ; i++){
		if(a[i] == 0) cout <<6;
		else cout <<8;
	}
	cout << endl;
}
bool check1(){
	if(a[1] == 1 && a[n] == 0) return true;
	return false;
}
bool check2(){
	for(int i = 1 ; i < n ; i++){
		if(a[i] == 1 && a[i+1] == 1) return false;
	}
	for(int i = 1; i < n-2 ; i++){
		if(a[i] == 0 && a[i+1] == 0 && a[i+2] == 0 && a[i+3] == 0) return false;
	}
	return true;
}
int main(){
	cin >> n;
	init();
	while(!final){
		if(check1() && check2()) in();
		sinh();
	}
}