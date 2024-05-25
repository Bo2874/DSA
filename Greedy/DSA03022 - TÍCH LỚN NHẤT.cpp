#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a, a+n);
	int x = a[n-1] * a[n-2]*a[n-3]; // có thể là 3 số dương
	int y = a[n-1] * a[n-2]; // có thể là dãy chỉ có 2 số dương
	int z = a[0] * a[1]; // có thể là 2 số âm
	int q = a[0] * a[1] * a[n-1]; // có thể là 2 số âm và 1 số dương lớn nhất dãy
	int res = max({x, y, z, q});
	cout << res ;
}