#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        vector <int> aa;
        int k=0,q=0;
        for(int g=0;g<a.size();g++){
            if(a[g]>='A'&&a[g]<='Z')
                a[g]+=32;
            if(a[g]>='a'&&a[g]<='z')
                aa.push_back(a[g]);
        }
        
        for(int i=97;i<=122;i++){
            int number=0;
            for(int h=0;h<a.size();h++){
                if(aa[h]==i)
                    number++;
            }
            if(number%2==1) q++;
        }
        // cout<<aa.size()<<endl;
        if(q>1||q==0) cout<<"no..."<<endl;
        else cout<<"yes !";
        cout<<endl;
    }

    return 0;
}