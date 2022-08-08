#include<iostream>
using namespace std;
const int N=1e7+10;

int hsh[N];

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;

    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;

    }
}

// INPUT
6
2 4 6 8 4 5
5
2
1
4
5
6
4
// OUTPUT
1
0
2
1
1


