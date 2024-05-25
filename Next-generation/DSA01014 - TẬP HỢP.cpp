#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[100], n, k, s, dem = 0, final = 0;
void init(){
	for(int i = 1; i <= k; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(a[i] == n + i - k && i > 0) i--;
	if(i == 0) final = 1;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++) a[j] = a[j-1]+1;
	}
}
void tinh(){
	int sum = 0;
	for(int i = 1; i <= k; i++) sum += a[i];
	if(sum == s) dem++;
}
int main(){
	int ok = 1;
	while(ok == 1){
		dem = 0, final = 0;
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0){
			break;
		}
		if(n < k){
			cout << 0 << endl;
			continue;
		}
		init();
		while(!final){
			tinh();
			sinh();
		}
		cout << dem << endl;
	}
}