 #include <iostream>
 #include <string>
using namespace std;
int main(){
     string a;
     int h=0;
     while(cin>>a){
         for(int i=a.size()-1;i>=0;i--){
             if(a[i]!='0') h=1;
             if(h==1){
                 cout<<a[i];
             }
         }
        if(!h) cout<<"0";
     }
    return 0;
}
