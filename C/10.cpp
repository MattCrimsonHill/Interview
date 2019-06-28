//prime number from 1 to 100
#include <iostream>
using namespace std;

int main(){
	
	int i, j, flag=0;
	
	for(i=1; i<=100; i++){
		for(j=2; j<=i/2; j++){
			if(i%j == 0){
				flag=1;
			}
		}
		if(flag == 0){
			cout<<i<<"\n";
		}
		flag = 0;
	}
}
