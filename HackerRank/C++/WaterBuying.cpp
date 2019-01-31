#include <iostream>
using namespace std;

int main() {
	int n[10], a[10], b[10], q, i, j, test1, test2, balance;
	cout<<"Enter the number of queries\n";
	cin>>q;
	for (i=0; i<q; i++)
	{
		cout<<"Enter the liters required (n), cost of first type, cost of second type\n";
		cin>>n[i]>>a[i]>>b[i];
		if(n[i]%2==0 && n[i]%1==0)
		{
			test1 = n[i]/2;
			test2 = n[i]*a[i];
			if (test1>test2)
				cout<<"Optimized cost: "<<test1<<"\n";
			else
				cout<<"Optimized cost: "<<test2<<"\n";
		}
		else {
			test1 = n[i]/2;
			test1 = test1*b[i];
			balance = n[i] - test1;
			if (balance==1){
				balance = balance*a[i];
				//cout<<"balance"<<balance;
			}
			cout<<"Optmized cost: "<<test1+balance<<"\n";
		}
	}
	return 0;
}
