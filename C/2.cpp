#include <iostream>
using namespace std;

int prime (int x){
	int i;
	for (i=1; i<=x/2; i++){
		if(x%i == 0){
			cout<<i<<"\n";
		}
	}
}

int main(){
	int x; 
	cin>>x; 
	prime(x);
}
