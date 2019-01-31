#include <iostream>
using namespace std;
int main() {
    char strings[10][15] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"}; int n; cin>>n; n > 9 ? cout<<"Greater than 9\n": cout<<strings[n-1];    
}
