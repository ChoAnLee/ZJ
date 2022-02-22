#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b;
    int j;
    int c[100];
         while(cin>>a){
             j=0;
             while(a>0){
                 c[j]=a%2;
                 a=a/2;
                j++;
             }
        for(int k=j-1;k>=0;k--){
            cout<<c[k];}
        cout<<endl;
    
         }
         return 0;
}
