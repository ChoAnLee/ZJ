#include<iostream>

using namespace std;

 

int main()

{   //a代表開始的數字

int a,b;//b代表數過數字總呵的臨界值

while(cin>>a>>b)

{//sum代表署過數字的總和(a,b都不超過10^5,所以int夠用)

int sum=a,c=1;

while(sum<=b) {a++; sum+=a; c++;}

//考慮(a==5,b==0) , (a==5,b==0) 

cout<<c<<endl;

}

}