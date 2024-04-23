#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, X[100];
bool cot[100],nguoc[100],xuoi[100];
int dem = 0;

void Try(int i){
	for(int j = 1; j <= n ; j++){
		if(cot[j] == false && xuoi[i-j+n] == false && nguoc[i+j-1] == false){
			X[i] = j;
			cot[j] = true;
			xuoi[i-j+n] = true;
			nguoc[i+j-1] = true;
			if(i == n){
				dem++;
			}
			else Try(i+1);
			cot[j] = false;
			xuoi[i-j+n] = false;
			nguoc[i+j-1] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		dem = 0;
		Try(1);
		cout << dem << endl;
	}
}