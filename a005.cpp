#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    int c,d,f,g;
    b=a;
    while(a--){
        cin>>c>>d>>f>>g;
        int e=(d/c);
        if((d-c)==(f-d)) cout<<c<<" "<<d<<" "<<f<<" "<<g<<" "<<g+(d-c)<<endl;
        else if((d/c)==(f/d)) cout<<c<<" "<<d<<" "<<f<<" "<<g<<" "<<g*e<<endl;
    }

    return 0;
}
