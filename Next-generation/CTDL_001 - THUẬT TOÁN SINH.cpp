#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[100], final = 0;
void init(){
	for(int i = 1; i <= n ; i++) a[i] = 0;
}
void sinh(){
	int i = n;
	while(a[i] == 1 && i >= 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) final = 1;
	else a[i] = 1;
}
void in(){
	for(int i = 1; i <= n ; i++) cout << a[i] <<" ";
	cout << endl;
}
bool doi_xung(){
	for(int i = 1; i <= n/2 ; i++){
		if(a[i] != a[n-i+1]) return false;
	}
	return true;
}
int main(){
	cin >> n;
	init();
	while(!final){
		if(doi_xung()) in();
		sinh();
	}
}