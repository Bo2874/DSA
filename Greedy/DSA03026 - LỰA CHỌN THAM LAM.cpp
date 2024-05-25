#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s; cin >> n >> s;
	int s1 = s;
	if(s > n*9 || (s == 0 && n > 1)){
		cout << -1 <<" "<<-1<< endl;
	}
	else{
		int a[n], b[n];
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		s--;
		for(int i = n-1; i >= 0; i--){
			for(int j = 9; j >= 0; j--){
				if(s >= j){
					a[i] = j;
					s -= j;
					break;
				}
			}
		}
		a[0]++;
		for(int i = 0; i < n; i++){
			for(int j = 9; j >= 0; j--){
				if(s1 >= j){
					b[i] = j;
					s1 -= j;
					break;
				}
			}
		}
		for(int x : a) cout <<x;
		cout <<" ";
		for(int x : b) cout <<x;
		cout << endl;	
	}
}