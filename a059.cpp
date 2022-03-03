#include <iostream>
using namespace std;
int main(){
    int a,c,d;
    int k=0;
    int hh[31]={1,4,9,16,25,36,49,64,81,100,121,144,169,196, 225 ,256, 289 ,324 ,361 ,400 ,441, 484, 529, 576 ,625, 676, 729, 784, 841 ,900 ,961};
    int sum=0;
    while(cin>>a){
        for(int i=1;i<=a;i++){
            cin>>c>>d;
        for(int h=c;h<=d;h++){
            for(int g =0;g<=31;g++){
                if(h==hh[g])
                    sum+=h;     
            }
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
        sum=0;
        }   
    }
    return 0;
}