#include <iostream>
using namespace std;
int main(){
int a,b;
int g;
while(cin>>a){
    double sum=0;
    for(int i=0;i<a;i++){
        cin>>g;
        sum+=g;}
        if((sum/a)>59)
        cout<<"no";
        else cout<<"yes";
        cout<<endl;
    
}
    return 0;
}