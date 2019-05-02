#include <iostream>
using namespace std;

int main() {
	int q, i, j, a1=0, a2=0;
	cin>>q;
	int a[q][3];
	for(i=0; i<q; i++){
		for(j=0; j<3; j++){
			cin>>a[i][j];
		}
	}
	for(i=0, j=0; i<q; i++){
		if(a[i][2]>a[i][1]){
			a1 = a[i][2]-a[i][1];
		}
		else if(a[i][1]>a[i][2]){
			a1 = a[i][1]-a[i][2];
		}
		if(a[i][2]>a[i][0]){
			a2 = a[i][2]-a[i][0];
		}
		else if(a[i][0]>a[i][2]){
			a2 = a[i][0]-a[i][2];
		}
		
		if(a1<a2){
			cout<<"Cat B\n";
		}
		else if(a2<a1){
			cout<<"Cat A\n";
		}
		else if(a1==a2){
			cout<<"Mouse C\n";
		}
	}
}
