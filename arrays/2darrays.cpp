#include<iostream>
using namespace std;

int main(){
    // suppose given an 2arrays of size 3 4 and how to initalise it; 3*4
    // first we initailse with the size of the arrays
    int n,m;
    cin>>n>>m;
    // second initalise the arrays 
    int a[n][m];
    for(int i=0;i<n;i++){// this loop is for row 
        for(int j=0;j<m;j++){//this loop is columns 
        cin>>a[i][j];

        }
    }

    // to print the arrays 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i]<<" ";

        }
        cout<<endl;
        
    }


}