// given a number print its factorial number where m =10^9+7;
// constarits 1<N<10^9+7;

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int m=1e+7;

        long long fact=1;
        for(int i=2;i<=n;i++){
            fact=(fact*i)%m;
            cout<<fact<<endl;

        }
        // this code will not run in  1 sec and it will give TLE so we will use pre-computation technique to optimise this code
        
    }
}