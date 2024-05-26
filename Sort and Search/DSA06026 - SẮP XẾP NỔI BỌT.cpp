#include <bits/stdc++.h>
using namespace std;

int b = 1;
void BubbleSort(int a[], int n){
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
			cout << "Buoc " <<b<< ": ";
			for(int j = 0; j < n ; j++) cout << a[j] <<" ";
			cout << endl;
			b++;
		}
	}
}
int main(){
	int n;cin >> n;
	int a[n];
	for(int i = 0; i < n ; i++) cin >> a[i];
	BubbleSort(a,n);
}