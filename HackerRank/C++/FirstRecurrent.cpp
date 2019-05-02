#include <iostream>

using namespace std;

int inputString(int a[], int length, int i){
	if(i == length)
		return 1;
	else {
		cin>>a[i];
		return inputString(a, length, i+1);
	}
}

int display(int a[], int length, int i) {
	if (i==length)
		return 1;
	else {
		cout<<a[i]<<"\n";
		return display(a, length, i+1);
	}
}

int firstRecurrence(int a[], length, int i){
	int hashTable[10][10];
	
	if(i==length)
		return 1;
	else{
		for(int j=0; j<length; j++){
			
			if(a[i])
		}
		return firstRecurrence(a, lengthm i);
	}	
}
int main() {
	int a[100], string, i, length, option;
	cout<<"Enter the string length\n";
	cin>>length;
	cout<<"Enter the Input of length: "<<length<<"\n";
	inputString(a, length, 0);
	cout<<"Enter 0 to display: ";
	cin>>option;
	if (option==0)
		display(a, length, 0);
		
}
