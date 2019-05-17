#include <iostream>
using namespace std;

int main(){
	
	int i, j, n, d1=0, d2=0;
	cin>>n;
	int a[n][n];
	for (i=0; i<n; i++){
		for (j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	int k = 0, l = n-1;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (i==j){
				d1 += a[i][j];
			}
			if (i==k && j==l){
				//cout<<"check i, j: "<<i<<", "<<j<<"\n";
				d2 += a[i][j];
			}
		}
		k++;
		l--;
	}
	if(d1>d2){
		cout<<d1-d2;
	}
	else{
		cout<<d2-d1;
	}
}
