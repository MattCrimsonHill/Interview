#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n;
	char name[20];
	cin>>name;
	cout<<name<<"\n";
	cout<<strrev(name)<<"\n";
	int s = strlen(name); cout<<s<<"\n";
	
	char t[3] = {'s', 'a', 'i'};
	
	cout<<strcat(t, strrev(name))<<"\n";
	
	char y[3] = {'s', 'a', 'i'};
	cin>>t;
	cin>>y;
	if (n = strcmp(t, y) == 0){
		cout<<"Equal";
	}
}
