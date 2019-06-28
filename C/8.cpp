#include <iostream>
using namespace std;

int armstrong(int x, int sum, int r){
	if (x!=0){
		r = x % 10;
		sum += r*r*r;
		return armstrong(x / 10, sum, r);
	}
	else {
		return sum;
	}
}


int main(){
	int x;
	cin>>x;
	int sum = 0, r = 0;
	if (armstrong(x, sum, r) == x)
		cout<<"Yes\n";
	else cout <<"No\n";	
}
