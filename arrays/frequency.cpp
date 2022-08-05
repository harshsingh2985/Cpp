#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }

    // 2.second step to calculate the maxiumum number in the arrays
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,a[i]);
    }
    // 3.third initalise the frequecny arrays with i+1;
    int frequecny[maxi+1]={0};

    for(int i=0;i<n;i++){
        frequecny[a[i]]++;

    }
    // 4.Priting the answers
    for(int i=0;i<n;i++){
        if(frequecny[i]!=0){
            cout<<i<<"->"<<frequecny[i]<<endl;


        }
    }
}
