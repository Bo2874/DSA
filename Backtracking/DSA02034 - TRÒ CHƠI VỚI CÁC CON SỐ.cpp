#include <bits/stdc++.h>
using namespace std;

int n, x[100];
bool check(){
	for(int i = 1; i < n; i++){
		if(abs(x[i] - x[i+1]) == 1) return false;
	}
	return true;
}
bool used[100];
void Try(int i){
	for(int j = 1; j <= n ; j++){
		if(!used[j]){
			used[j] = true;
			x[i] = j;
			if(i == n){
				if(check()){
					for(int u = 1; u <= i; u++) cout << x[u];
					cout << endl;
				}
			}
			else Try(i+1);
			used[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1);
	}
}