#include<bits/stdc++.h>
using namespace std;
void a (int ,int);
int main(){
    string s;
    while(cin>>s){
        for(int i=0;i<6;i++){
            int h=abs(s[i+1]-s[i]);
            cout<<h;
    }
    }
    return 0;
}
void a (int g,int f){
    if(g>f)
        swap(g,f);
}