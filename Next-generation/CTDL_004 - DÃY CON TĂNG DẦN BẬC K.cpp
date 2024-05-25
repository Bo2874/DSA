#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[101], b[101], n, k, ok = 0, dem = 0;
void init(){
	for(int i = 1; i <= k; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(a[i] == n + i - k && i > 0) i--;
	if(i == 0) ok = 1;
	else {
		a[i]++;
		for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
	}
}
bool check(){
	for(int i = 1; i < k; i++) if(b[a[i]] > b[a[i+1]]) return false;
	return true;
}
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> b[i];
	init();
//	if(check()) dem++;
	while(!ok){
		if(check()) dem++;
		sinh();
	}
	cout <<dem;
}