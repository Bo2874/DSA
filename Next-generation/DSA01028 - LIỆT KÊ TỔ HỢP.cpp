#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[100],final = 0, k, n;
void init(){
	for(int i = 1; i <= k ; i++) a[i] = i;
}
void sinh(){
	int i = k;
	while(a[i] == n-k+i) i--;
	if(i == 0) final = 1;
	else{
		a[i]++;
		for(int j = i+1 ; j <= k ; j++) a[j] = a[j-1]+1;
	}
}
void in(int b[]){
	for(int i = 1; i <= k ; i++){
		cout << b[a[i]] <<" ";
	}
	cout << endl;
}
int main(){
	cin >> n >> k;
	set <int> se;
	for(int i = 1 ; i <= n ; i++) {
		int x; cin >> x;
		se.insert(x);
	}
	int b[100];
	int i = 1;
	for(auto it : se){
		b[i] = it;
		i++;
	}
	n = se.size();
	init();
	while(!final){
		in(b);
		sinh();
	}
}