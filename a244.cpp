#include <iostream>
using namespace std;
int main(){
long int aa,a,b,c;
while(cin>>aa){
    for(int i=0;i<aa;i++){
        cin>>a>>b>>c;
    switch(a){
        case 1:
            cout<<b+c<<endl;
            break;
        case 2:
            cout<<b-c<<endl;
            break;
        case 3:
            cout<<b*c<<endl;
            break;
        case 4:
            cout<<b/c<<endl;
            break;
    }
    }
}
    return 0;
}