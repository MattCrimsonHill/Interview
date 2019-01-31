#include <iostream>
using namespace std;
int great(int arr[]) {
    int greater=arr[0]; for(int i=1; i<4; i++)  if(arr[i]>greater)  greater=arr[i];return greater;        
}
int main() {
    int i, arr[100]; for(i=0; i<4; i++) cin>>arr[i]; cout<<great(arr);	return 0;
}


