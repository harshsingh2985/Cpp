// 6 --->SIZE OF THE ARRAYS
// 2 5 6 4 5 8
// 5---->NO OF QUERIES ASKED IN THE PROCESS
// 2
// 5
// 4
// 9
// 9

// // OUTPUT
// 1
// 2
// 1
// 0
// 0

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int counter=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                counter++;

            }
        }
        cout<<counter<<endl;

    }
    // but it will take time completed n^2
    // it will not run in 1 sec it will give TLE error so in the case we have to use some pre-compuation technique like hashing
       
}