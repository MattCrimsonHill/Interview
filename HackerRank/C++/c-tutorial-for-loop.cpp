#include <iostream>
using namespace std;
int main() {
    int a, b; cin>>a>>b; char strings[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    for(int i=a; i<=b; i++)
        i<=9? cout<<strings[i-1]<<"\n": i%2==0? cout<<"even\n": cout<<"odd\n";
}
