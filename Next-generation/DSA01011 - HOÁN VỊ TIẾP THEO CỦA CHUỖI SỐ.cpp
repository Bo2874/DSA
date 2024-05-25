#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] < s[i+1]) return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		string s; cin >> s;
		if(check(s)) cout << x <<" "<<"BIGGEST\n";
		else{
			int n = s.size();
			int tmp;
			for(int i = n-1; i >= 1; i--){
				if(s[i] > s[i-1]){
					tmp = i-1;
					break;
				}
			}
			int tmp1 = tmp+1;
			for(int i = tmp + 1; i < n; i++){
				if(s[i] > s[tmp]){
					tmp1 = i;
				}
			}
			swap(s[tmp], s[tmp1]);
			reverse(s.begin() + tmp + 1, s.end());
			cout << x <<" " << s << endl;
		}
	}
}