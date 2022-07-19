//
// 5
// 140 82
// 89 134
// 90 110
// 112 106
// 88 90

// output
// 1 58

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum1=0;
        int sum2=0;
        int winner=0;
        int lead=0;
        int def=0;

        for(int i=0;i<n;i++){
            int p1,p2;
            cin>>p1>>p2;

            sum1+=p1;
            sum2+=p2;
            if(sum1>sum2){
                def=sum1-sum2;
                if(def>lead){
                    lead=def;
                    winner=1;
                }
            }
            else{
                def=sum2-sum1;
                if(def>lead){
                    lead=def;
                    winner=2;
                    
                }
            }

        }
    }
}