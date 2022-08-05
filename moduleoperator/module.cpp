// Given a number N and Prints its factorial a
// constraits 1<N<=100

// print answer module m=47;

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int m=47;

    long long fact=1;

    for(int i=2;i<=n;i++){
        fact=(fact*i)%m;
    }
    
    cout<<fact<<endl;
}

// why to use modular function because if we cant store the value of int in the given constartits so we module operator tostore the answer

