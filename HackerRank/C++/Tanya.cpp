#include <iostream>
using namespace std;

int main() {
	int n, a[n], i, j, even=0, odd=0, count=0;
	cin>>n;
	for (i=0; i<n; i++)
		cin>>a[i];
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			if(j==i)
				j++;
			else
			{
				if (j%2!=0)
					even+=a[j];
				else if (j%2==0)
					odd+=a[j];
			}
		}
		//cout<<even<"\n";
		//cout<<odd<<"\n";
		if (even==odd)
			count++;
	}
	cout<<count;	
}
