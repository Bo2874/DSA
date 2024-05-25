#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,b[100],final = 0;
void sinh(){
	int i = n-1;
	while(b[i] > b[i+1]) i--;
	if(i == 0) final = 1;
	else{
		int j = n;
		while(b[j] < b[i]) j--;
		swap(b[i],b[j]);
		reverse(b+i+1,b+n+1);
	}
}
void in(){
	for(int i = 1; i <= n ; i++) cout << b[i] <<" ";
	cout << endl;
}
int main(){
	cin >> n;
	for(int i = 1; i <= n ; i++) cin >> b[i];
	sort(b+1,b+n+1);
	while(!final){
		in();
		sinh();
	}
}