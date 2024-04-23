#include <bits/stdc++.h>
using namespace std;

int n, a[100],x[100];
void Try(int i){
	cout <<"[";
	for(int j = 1; j <= n-1; j++){
		cout << a[j] <<" ";
	}
	cout << a[n] <<"]";
	cout << endl;
	n--;
	if(n == 0) return;
	for(int j = 1; j <= n; j++){
		a[j] = a[j] + a[j+1];
	}
	Try(i+1);
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= n ; i++) cin >> a[i];
		Try(1);	
	}
}