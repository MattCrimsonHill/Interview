#include <iostream>
using namespace std;
int main() {
    int A[6][6], i, j, sum1, sum[12], sumCount=0;
    for(i=0; i<6; i++)
        for(j=0; j<6; j++)
            cin>>A[i][j];
    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
        {
            sum1 = A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+A[i+2][j]+A[i+2][j+1]+A[i+2][j+2]; sum[sumCount] = sum1; sumCount++;
        } 
    sum1 = sum[0];             for(i=1; i<sumCount; i++)   if(sum[i]>sum1) sum1=sum[i];cout<<sum1;        

}
