#include <string>
#include <iostream>
using namespace std;
int main(){
string x;
const char *y="hello";
const char z[]="hell";
char a[][4]={"abc","aa","cc","ggg"};
x=y;
cout<<x<<endl;
x=z[0];
cout<<x<<endl;
cout<<a[0][1]<<endl;
    return 0;
}
