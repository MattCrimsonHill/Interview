#include <iostream>
using namespace std;

int main(){
	int a[5] = {1, 2, 3, 4, 5};
	int i, j, temp;
	for(i=0, j = 5-1; i<5/2; i++, j--){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i=0; i<5; i++){
		cout<<a[i];
	}
}
