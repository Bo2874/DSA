#include <bits/stdc++.h>
using namespace std;

int n, k, x[100];
void Try(int i, int bd){
	for(int j = bd; j <= n; j++){
		x[i] = j;
		if(i == k){
			for(int u = 1; u <= i ; u++){
				cout << (char)(x[u] - 1 + 'A');
			}
			cout << endl;
		}
		else Try(i+1,j);
	}
}
int main(){
	char p;
	cin >> p >> k;
	n = p - 'A' + 1;
	Try(1,1);
}