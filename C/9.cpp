//Sum of first and last digit of an integer

#include <iostream>
using namespace std;



int main(){
	int x, i, r, sum=0;
	cin>>x;
	for(i=0; x!=0; i++){
		r = x%10;
		x = x/10;
		if(i == 0 || x == 0){
			sum += r;
		}
	}
	cout<<sum;
}
