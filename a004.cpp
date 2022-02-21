#include<bits/stdc++.h>
using namespace std;
int main(){
int b;
while(cin>>b){
if(b%4==0&&b%100!=0||b%400==0) cout<<"閏年"<<endl;
else cout<<"平年"<<endl;
}
    return 0;
}
