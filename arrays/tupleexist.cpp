3
5 5 5
2 3 4
2 2 4

// // OUTPUT
// yes
// no
// yes

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n[3];
        cin>>n[0]>>n[1]>>n[2];
        sort(n,n+3);

        if(n[0]==n[1]){
            cout<<"yes"<<endl;

        }
        else{
            cout<<"no"<<endl;

        }

    }
}