#include <iostream>
using namespace std;

int main() {
    long int i, n, k;
    cin>>n>>k;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int lar=a[0], por;    
    for(i=0; i<n; i++){
        if(a[i]>lar && k<a[i])
        {
            lar = a[i];
            por = a[i]-k;
        }
    }
    cout<<por<<endl;
}        

