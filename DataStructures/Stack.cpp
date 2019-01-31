#include <iostream>

using namespace std;

int display(int top, int n, int *stack);

int display(int top, int n, int *stack) {
	int i;
	cout<<"-----------------\n";
	for(i=top-1; i>=0; --i)
		cout<<"\t"<<stack[i]<<"\n";
	cout<<"-----------------\n";
}

int push(int top, int n, int *stack) {
	int num;
	if(top==n) {
		cout<<"Stack Full\n";
		display(top, n, stack);
	}
	else {
		cout<<"Enter the number to be pushed: ";
		cin>>num;
		stack[top]=num;
	}	
	return top;
}

int pop(int top, int n, int *stack) {
	if(top==0) {
		cout<<"Stack Empty\n";
		display(top, n, stack);
	}	
	stack[top]=0;
	return top;
}

int main() {
	int n;
	cout<<"Enter the Stack size: ";
	cin>>n;
	int stack[100], top=0, option;
	while(1) {
		cout<<"Perform operation.\n 1. Push.\n 2. Pop.\n 3. Print Stack.\n 4. Quit\n";
		cin>>option;
		if(option==1) {
			push(top, n, stack);
			top++;
		}
		else if(option==2) {
			pop(top, n, stack);
			top--;
		}
		else if(option==3)
			display(top, n, stack);
		else {
			cout<<"End of Program\n";
			break;
		}
	}
}
	
	
