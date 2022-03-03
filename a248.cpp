#include <iostream>

#include <iomanip>

using namespace std;

int main(){
    int n,a,b;

    while(cin>>a>>b>>n){
        cout<<a/b;

        if(n){
            cout<<'.';

            int remainder=a%b;

            for(int i=1;i<=n;i++){
                remainder=remainder*10;

                cout<<remainder/b;

                remainder=remainder%b;

            }

        }

        cout<<'\n';

    }           
return 0;
}