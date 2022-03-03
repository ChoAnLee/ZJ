#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int a,b,r;

    while(cin>>a>>b){
        int ans=0;
        
        if(a==1)a++;
        for(;a<=b;a++){
            r=(int)floor(sqrt(a)+0.5);
            bool n=true;
            for(int i=2;i<=r;i++){
                if(a%i==0){
                    n=false;
                    break;
                }
            }
            if(n)ans++;
        }
        cout<<ans<<endl;
    }
}