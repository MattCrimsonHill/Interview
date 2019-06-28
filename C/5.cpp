// Multi dimensional array input
#include <iostream>
using namespace std;

int main(){
	int a[10][10];
	int i, j, sum=0;
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			cin>>a[i][j];
			sum+=a[i][j];
		}
		cout<<"\n";
	}
	cout<<sum;
}
