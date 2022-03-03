#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(){
int a;
while(cin>>a){
    int x,y,z,w,n,m;
    string s;
    cin>>x>>y>>z>>w>>n>>m;
    cout<<endl;
    // getline(cin,s);
    getline(cin,s);//太多資料數，用兩個getline
    if(s.length()==0){// 當太多筆 string or int ，用getline get進string，之後如果要用int型態，#include <sstream>。 stringstream "the name of stringstream" ("the name of string")。
        cout<<m<<"g"<<endl;
        continue;
    }
    stringstream dd(s);
    bool bye=false;
    int c;
    int b;
    while(dd>>c){
        m-=b*n;
        if(m<=0){
            bye=true;
            break;
        }
        if(c==1)
            m+=x;
        else if(c==2)
            m+=y;
        else if(c==3)
            m-=z;
        else if(c==4)
            m-=w;
            b++;
    }
    if(m<=0){
        bye=true;
        break;
    }
    if(bye)     cout<<"bye~rabbit"<<endl;
    else        cout<<m<<"g"<<endl;
    }
    return 0;
}