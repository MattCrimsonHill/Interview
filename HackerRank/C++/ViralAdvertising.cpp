#include <iostream>
using namespace std;

int main(){
	int i, n; cin>>n;
	int S=5, L, C, S1, L1, C1;
	for(i=0; i<n; i++){
		if(i!=0){
			S = L1 * 3;
			L= S / 2;
			C = L + C1;
			L1 = L;
			C1 = C;
		}
		if(i==0){
			S = 5;
			L = S / 2;
			C = L;
			L1 = L;
			C1 = C;
		}
	}
	cout<<C;
}
