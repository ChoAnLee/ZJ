#include <iostream>
using namespace std;
int main(){
    int a;
    int q=0,w=0,e=0;
    while(cin>>a){
        int b[100];
    for(int i=0;i<a;i++){
        cin>>b[i];  
        switch(b[i]%3){
    case 0:
        q++;
        break;
    case 1:
        w++;
        break;
    case 2:
        e++;
        break;
    }
    }
    cout<<q<<" "<<w<<" "<<e<<endl;
    }
    return 0;
}