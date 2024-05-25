#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll merge(ll a[], ll l, ll m, ll r){
	vector <int> trai(a + l, a + m + 1);
	vector <int> phai(a + m + 1, a + r + 1);
	ll ans = 0;
	int i = 0, j = 0;
	while(i < trai.size() && j < phai.size()){
		if(trai[i] <= phai[j]){
			a[l++] = trai[i];
			i++;	
		}
		else{
			a[l++] = phai[j];
			ans += trai.size() - i;
			j++;
		}
	}
	while(i < trai.size()) a[l++] = trai[i++];
	while(j < phai.size()) a[l++] = phai[j++];
	return ans;
}
ll mergeSort(ll a[], ll l, ll r){
	if(l < r){
		ll m = (l+r)/2;
		ll tmp1 = mergeSort(a, l, m);
		ll tmp2 = mergeSort(a, m+1, r);
		return tmp1 + tmp2 + merge(a, l, m, r);
	}
	else return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << mergeSort(a, 0, n-1) << endl;
		
	}
}