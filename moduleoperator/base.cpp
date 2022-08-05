// Calculate the given factorial of the number using Module Operator
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
        cout<<fact<<endl;

    }

    // BUT IN CASE OF 21 IT WILL HAVE PRECISION ERROR ON THE SYSTEM
    
}