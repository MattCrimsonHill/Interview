#include <iostream>
#include <string>
using namespace std;

int main(){ 
	int n, len=1, i, j;
	cin>>n;
	int a[n];
	for (i=0; i<n; i++){
		cin>>a[i];
	}
	for (i=0; i<n; i++){
		if(a[i]!=0){
			for(j=1; j<=a[i]; j++){
				if(j%2!=0){
					len = len*2;
				}
				if(j%2==0){
					len = len+1;
				}
			}
			cout<<len<<"\n";
		}
		else if(a[i]==0){
			len=1;
			cout<<len<<"\n";
		}
		len=1;
	}
}
