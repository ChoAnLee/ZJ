#include <iostream>
using namespace std;
int main(){
int amount;
int sum=0;
while(cin>>amount){
if(amount<=10)
    sum=sum+ 6*amount;
else if(amount>10&&amount<=20)
    sum=60+2*(amount-10);
else if(amount>20&&amount<=40)
    sum=80+(amount-20);
else
    sum=100;
cout<<sum<<endl;
}
    return 0;
}