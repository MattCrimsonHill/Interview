#include <iostream>
using namespace std;

int main() {
	long long int n[10], a[10], b[10], q, i, j, test1, test2, balance, answer[100];
	cin>>q;
	for (i=0; i<q; i++)
	{
		cin>>n[i]>>a[i]>>b[i];
		if(n[i]%2==0 && n[i]%1==0)
		{
			test1 = n[i]/2;
			test2 = n[i]*a[i];
			if (test1>test2)
				answer[i]=test1;
			else
				answer[i]=test2;
		}
		else {
			test1 = n[i]/2;
			test1 = test1*b[i];
			balance = n[i] - test1;
			if (balance==1)
				balance = balance*a[i];
			answer[i]=test1+balance;
		}
	}
	for (i=0; i<q; i++)
		cout<<answer[i]<<"\n";
	return 0;
}
