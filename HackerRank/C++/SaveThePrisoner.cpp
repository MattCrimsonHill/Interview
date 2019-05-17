#include <iostream>
using namespace std;

int main(){
	long long unsigned int i, j, t, x, n, m, s, g=0, d, A;
	cin>>t;
	for(i=0; i<t; i++){
		cin>>n>>m>>s;
		x = m+s-1;
		long long unsigned int a[x];
		for(j=0; j<x; j++){
			a[j] = j;
		}
		for (j=0; j<x; j++){
			if (a[j]%n==0 && (a[j+1]-1)==a[j]){
				g++;
			}
		}
		d = (g*n)-x;
		A = n - d;
		cout<<A<<"\n";
		x = n = m = s = g = d = A = 0;
	}
}
