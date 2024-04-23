#include <bits/stdc++.h>
using namespace std;

int n = 8, x[100];
int a[10];

void in(){
	a[0] = 0;
	a[1] = 2;
	cout <<a[x[1]]<<a[x[2]]<<"/"<<a[x[3]]<<a[x[4]]<<"/"<<a[x[5]]<<a[x[6]]<<a[x[7]]<<a[x[8]]<<endl;
}
// bool check(){
// 	for(int i = 1; i <= n/2 ; i++) {
// 		if(x[i] != x[n-i+1]) return false;
// 	}
// 	return true;
// }
void Try(int i){
	for(int j = 0; j <= 1; j++){
		x[i] = j;
		if(i == 8){
			if(x[3] == 0 && x[4] == 1 && x[5] == 1 && (x[1] == 1 || x[2] == 1)){
				in();
			}
		}
		else Try(i+1);
	}
}
int main(){
	Try(1);
}