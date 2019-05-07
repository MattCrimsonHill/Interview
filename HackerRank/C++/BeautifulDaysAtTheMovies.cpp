#include <iostream>
#include <string>
#include <math.h>
using namespace std;

long long int reverse(int b){
	long long int rev=0;
	while(b!=0){
		rev = rev*10;
		rev = rev + b%10;
		b = b/10;
	}
	return rev;
}

int main(){
	long long int l1, l2, d, count;
	float x;
	long long int rev;
	cin>>l1>>l2>>d;
	for(long long int i=l1; i<=l2; i++){
		rev = reverse(i);
		if(rev>i){
			x = rev - i;
		}
		else if(i>rev){
			x = i - rev;
		}
		else {
			x = i - rev;
		}
		if (fmod(x, d)==0){
			count++;
		}
	}
	cout<<count;
}
