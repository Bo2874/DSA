#include <bits/stdc++.h>
using namespace std;

int n, x[100];
bool used[100];
bool check(){
	for(int i = 2; i < n; i++){
		if(x[i-1] != 1 && x[i-1] != 5 && x[i+1] != 1 && x[i+1] != 5 && (x[i] == 1 || x[i] == 5)) return false;
	}
	return true;
}
void in(){
	for(int i = 1; i <= n; i++){
		cout << (char)(x[i] - 1 + 'A');
	}
	cout << endl;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			used[j] = true;
			x[i] = j;
			if(i == n){
				if(check()) in();
			}
			else Try(i+1);
			used[j] = false;
		}
	}
}
int main(){
	char p; cin >> p;
	n = p - 'A' + 1;
	Try(1);
}