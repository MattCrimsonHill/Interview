#include <iostream>
using namespace std;

int main(){
	int i, j, r1=0, r2=0, r3=0, d1=0, d2=0;
	int a[3][3];
	int k = 0, l = 2;
	for (i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin>>a[i][j];
			if(i==0){
				r1+=a[i][j];
			}
			if(i==1){
				r2+=a[i][j];
			}
			if (i==2){
				r3+=a[i][j];
			}
			if (i==j){
				d1+=a[i][j];
			}
		}
	}
	d2 = a[0][2] + a[1][1] + a[2][0];
	cout<<r1<<" "<<r2<<" "<<r3<<" "<<d1<<" "<<d2;
	
}
