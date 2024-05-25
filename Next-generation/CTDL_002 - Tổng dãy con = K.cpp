#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100], final = 0;
void init(){
	for(int i = 1; i <= n ; i++) a[i] = 0;
}
void sinh(){
	int i = n;
	while(a[i] == 1) i--;
	if(i == 0) final = 1;
	else{
		a[i] = 1;
		for(int j = i+1; j <= n ; j++) a[j] = 0;
	}
}
bool check(int b[]){
    int sum = 0;
	for(int i = 1; i <= n ; i++){
		if(a[i] == 1) sum += b[i];
	}
	if(sum == k) return true;
	return false;
}
void in(int b[]){
	for(int i = 1; i <= n ; i++){
		if(a[i] == 1) cout << b[i] <<" ";
	}
	cout << endl;
}
int main(){
	cin >> n >> k;
	int b[n+1];
	for(int i = 1; i <= n ; i++) cin >> b[i];
	int cnt = 0;
	init();
	while(!final){
		if(check(b)){
			cnt++;
			in(b);
		}
		sinh();
	}
	cout << cnt;
}