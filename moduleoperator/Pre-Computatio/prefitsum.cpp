// INPUTS
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6

// OUTPUTS
8
19
28
21

#include<iostream>
using namespace std;

const int N=1e5+10;
int a[N];

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a[i];

    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l >> r;
        long long sum=0;

        for(int i=l;i<=r;i++){
            sum+=a[i];
        }cout<<sum<<endl;

    }
    // it will not run in this complier and it will give TLE error.
    // AND WE WILL WRITE PRE-COMPUATION TECHNIQUE AND PREFIT SUM ERROR
    // 

}