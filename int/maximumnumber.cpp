// program to calculate the maximum in the given number in the intgers
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,max;
        cin>>a>>b>>c;

        max=a;
        if(b>max)
        max=b;
        if(c>max)
        max=c;
        cout<<max<<endl;

    }
}