#include <iostream>
#include <string>
using namespace std;
int g(int a,int b){
    if(b==0)
        return a;
    else
        return g(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<g(a,b)<<endl;
    return 0;
}
