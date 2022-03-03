#include <iostream>
using namespace std;
int main(){
int a;
    while(cin>>a && a<10000 && a!=0){
        for(int i=1;i<a;i++){
            if(i%7!=0)
                cout<<i<<" ";

        }
        cout<<endl;
    }
    return 0;
}