#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[105], ok = 0;
void Try(int i,int bd, int s, int sum){
	if(ok) return;
	for(int j = bd; j <= n; j++){
		if(s + a[j] <= sum){
			if(s + a[j] == sum){
				ok = 1;
				return;
			}
			else Try(i + 1,j+1,s + a[j], sum);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		ok = 0;
		cin >> n;
		int sum = 0;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum % 2 == 0){
			sum /= 2;
			Try(1, 1, 0, sum);
			if(ok) cout << "YES";
			else cout <<"NO";		
		}
		else cout << "NO";
		cout << endl;
	}
}