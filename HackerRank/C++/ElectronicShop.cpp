#include <iostream>
using namespace std;

int main(){
	static int i, j, b, n, m, greatest, a1[1000], a2[1000], c[1000][1000];
	cin>>b>>n>>m;
	for(i=0; i<n; i++){
		cin>>a1[i];
	}
	for (i=0; i<m; i++){
		cin>>a2[i];
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			c[i][j]=a1[i]+a2[j];
		}
	}
	if(c[0][0]<b){
		greatest=c[0][0];
	}
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			if (c[i][j]>greatest && c[i][j]<b){
				greatest=c[i][j];
			}
		}
	}
	if(greatest==0){
		cout<<-1;
	}
	else{
		cout<<greatest;
	}
}

