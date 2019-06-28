// sum of first and last digit of an integer
#include <iostream>
using namespace std;

int main(){
	int x; cin>>x;
	int n1, n2;
	for(int i=0; x!=0; i++){
		if(i == 0){
			n1 = x%10;	
		}
		if(x/10 == 0){
			n2 = x;
		}
		x = x/10;
	}
	cout<<n1+n2;
}
