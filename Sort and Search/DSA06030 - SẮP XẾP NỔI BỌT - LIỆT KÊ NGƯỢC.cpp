#include <bits/stdc++.h>
using namespace std;

vector <string> v;
void sx(int a[], int n){
    for (int i = 0; i < n-1; i++){
    	int ok = 0;
		for (int j = 0; j < n-1-i; j++){
//			phan lon nhat luon bi day ve cuoi nen co the tru di i phan tu
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
				ok = 1;
			}
		}
		if(ok) {
			string s;
			s += "Buoc ";
			s += to_string(i+1);
			s += ": ";
			for(int j = 0; j < n ; j++) {
				s += to_string(a[j]);
				s += " ";
			}
			v.push_back(s);
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		sx(a,n);
		for(int i = v.size()-1 ; i >= 0 ; i--) cout << v[i] << endl;
		v.clear();
	}
}