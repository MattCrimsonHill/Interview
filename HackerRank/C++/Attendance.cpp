#include <iostream>
using namespace std;

int main(){
	int N, i, j, a[110], count=0;
	cin>>N;
	for (i=0; i<N; i++) 
		cin>>a[i];
	for(i=0; i<N; i++){
		if(a[i]==0)
			i++;
		for(j=i; j<N; j++){
			if(a[j]==a[i]){
				if (i==j)
					j++;
				else if(a[j]==a[i] && a[i]==0)
					j++;
				else{
					count++;
					cout<<a[i]<<"-"<<i<<"=="<<a[j]<<"-"<<j<<"\n";
					a[j]=0;
					a[i]=0;
					break;
				}
			}
		}
	}
	cout<<count;
}

