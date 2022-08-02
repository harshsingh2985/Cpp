// checking priting the odd number in the arrays or not

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            int odd=0;

            if(a%2==0){

            }else{
                odd++;

            }
            cout<<odd<<endl;
            
        }
    }
}