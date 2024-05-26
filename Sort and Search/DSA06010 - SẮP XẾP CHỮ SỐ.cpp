#include <bits/stdc++.h>
using namespace std;

void BubbleSort(long long a[], int n){
    for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-1-i; j++){
//			phan lon nhat luon bi day ve cuoi nen co the tru di i phan tu
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[n];
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		vector <long long> v;
		for(int i = 0; i < n ; i++){
			while(a[i]){
				int r = a[i]%10;
				v.push_back(r);
				a[i]/=10;
			}
		}
		int m = v.size();
		long long b[m];
		for(int i = 0 ; i < m ; i++){
			b[i] = v[i];
		}
		BubbleSort(b,m);
		map <long long,long long> mp;
		for(int i = 0 ; i < m ;i++){
			mp[b[i]]++;
		}
		for(int i = 0 ; i < m ; i++){
			if(mp[b[i]] != 0) {
				cout << b[i] <<" ";
				mp[b[i]] = 0;
			}
		}
		cout << endl;
	}
}