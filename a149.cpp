#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b;
while(cin>>a){
    
    int z=0;
    for(int i=0;i<a;i++){
        int sum=1;
        cin>>b;
        
        while(b/10){
            int g= b%10;
            b/=10;
            z++;
            sum*=g;
        }
        sum*=b%10;
        cout<<sum<<endl;
    }
}
    return 0;
}