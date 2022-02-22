#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        int b =a.size();
        int t=0;  
        for(int i=0;i<b;i++){
            if(a[i]==a[b-i-1]) t++;
        }
        if(t==b) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
