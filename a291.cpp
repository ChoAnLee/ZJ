#include <iostream>
#include <sstream>
using namespace std;
int main(){
int amount;
int g[4];
int gg[4];
int h=0;
int aa=0,bb=0;
for(int f=0;f<4;f++)
        cin>>gg[f];
while(cin>>amount){
    for(int i=0;i<4;i++)
        cin>>g[i];
    for(int i=0;i<4;i++){
        for(int d=0;d<4;d++){
            if(g[i]==gg[d]&&h==i){
                 h++;
                aa++;
    }
    }
    }
}
    return 0;
}