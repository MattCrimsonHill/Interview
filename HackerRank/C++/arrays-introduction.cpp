#include <iostream>
using namespace std;

int main() {
    int N; int *A = new int[N]; cin>>N; for(int i=0; i<N; ++i)  cin>>A[i]; for(int i=N-1; i>=0; --i)   cout<<A[i]<<" ";
}
