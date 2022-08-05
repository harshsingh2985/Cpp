#include<iostream>
using namespace std;

int m=1e9+7;
int N=1e5+7;


int main(){
    long long fact[N];
    fact[0]=fact[1]=1;

    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;


    }
}