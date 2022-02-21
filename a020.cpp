#include <iostream>
#include <string>
using namespace std;
int main(){
string str1;
 char a;
 int b,c,sum;
 while(cin>>str1)
{
    char ch [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		int as[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
		for(int i=0;i<=25;i++) 
		{
			if(str1[0]==ch[i])
			{
    b=(as[i]%10)*9;
    c=as[i]/10;        
    sum=b+c;
            }
            }
    int k=8;
    for(int i=1;i<=9;i++){
        int g=str1[i]-'0';
        g=g*k;
        sum=sum+g;
        k--;
    }
    sum=sum+str1[9]-'0';
    if(sum%10==0)  cout<<"real"<<endl;
    else cout<<"fake"<<endl;

}
 return 0;
}
