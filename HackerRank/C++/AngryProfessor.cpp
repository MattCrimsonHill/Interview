#include <iostream>

using namespace std;

int main(){
    int i, j, N, count=0;
    cin>>N;
    int n, k, a[100];
    for (i=0; i<N; i++)
    {
        cin>>n>>k;
        for(j=0; j<n; j++){
            cin>>a[i];
            if (a[i]<=0)
                count++;
        }
        if (count>=k){
            cout<<"NO\n";
        }    
        else{
            cout<<"YES\n";
        }
        count=0;
    }
    
}

