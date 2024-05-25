#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, final = 0, dem = 0;
int a[100];
vector <string> v;
void init(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}
bool check(){
	int cnt = 1;
	for(int i = 1; i < n; i++){
		if(a[i] == 0 && a[i] == a[i+1]) cnt++;
		else {
			if(cnt == k) return true;
			else cnt = 1;
		}
	}
	if(cnt == k) return true;
	return false;
}
//void in(){
//	for(int i = 1; i <= n; i++) cout << a[i] <<" ";
//	cout << endl;
//}
void sinh(){
	if(check()){
		dem++;
		string tmp = "";
		for(int i = 1; i <= n; i++){
			if(a[i] == 0) tmp += "A";
			else tmp+="B";
		}
		v.push_back(tmp);
	}
	int i = n;
	while(a[i] == 1 && i > 0){
		a[i] = 0;
		i--;
	}
	if(i == 0) final = 1;
	else a[i] = 1;
}
int main(){
	cin >> n >> k;
	init();
	while(!final){
//		in();
		sinh();
	}
	cout << dem << endl;
	for(auto it : v) cout << it << endl;
}