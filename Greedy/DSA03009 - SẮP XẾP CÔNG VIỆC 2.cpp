#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct job{
	int id, deadline, profit;
};
bool cmp(job a, job b){
	return a.profit > b.profit ;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		job a[10000];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i].id >> a[i].deadline >> a[i].profit ;
		}
		bool used[10000] = {false};
		sort(a, a+n, cmp); //sắp xếp theo lợi nhuận cao nhất
		int cnt = 0,sum = 0;
		for(int i = 0 ; i < n ; i++){
			for(int j = a[i].deadline - 1 ; j >= 0 ; j--){
//				ưu tiên khoảng time gần deadline nhất để use
				if(used[j] == false){
					sum += a[i].profit ;
					cnt++;
					used[j] = true;
					break;
				}
			}
		}
		cout << cnt <<" "<< sum << endl;
	}
}