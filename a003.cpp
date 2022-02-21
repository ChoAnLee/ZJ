#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
float s;
cin>>a>>b;
s=(a*2+b)%3;
if(s==0) cout<<"普通"<<endl;
else if (s==1) cout<<"吉"<<endl;
else cout<<"大吉"<<endl;
    return 0;
}
