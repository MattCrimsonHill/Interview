#include <iostream>
using namespace std;

int main(){
	int N, P, forward, backward;
	cin>>N;
	cin>>P;
	//forward
	forward = P/2;
	//backward
	if (P==N)
		backward=0;
	else if (P==(N-1)){
		if(N%2==0)
			backward=1;
		else if(N%2!=0)
			backward=0;
	}
	else if (P%2==0){
		if(N%2==0){
				backward=(N-(P+1))/2;
				backward++;
		}
		else if (N%2!=0)
			backward=(N-(P+1))/2;
	}
	else if (P%2!=0)
		backward=(N-P)/2;
	if (forward<backward)
		cout<<forward;
	else
		cout<<backward;
}
