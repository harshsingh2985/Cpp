// Vasya likes the number 239239. Therefore, he considers a number pretty if its last digit is 22, 33 or 99.
// Vasya wants to watch the numbers between LL and RR (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?
// 2
// 1 10
// 11 33
// outputs

// 3
// 8




#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n];
        int count=0;

        for(int i=0;i<n;i++){
            cin>>a[i];
            count++;

        }
        cout<<count<<endl;
        
    }
}