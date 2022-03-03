#include <iostream>
#include <string>
using namespace std;
int main(){
long int number;
int sum=0;
int b;
char q='A';
int enu[26] = {1,10,19,28,37,46,55,64,39,73,82,2,11,20,48,29,38,47,56,65,74,83,21,3,12,30};
while(cin>>number){
    b=number%10;
    number/=10;
    for(int i=1;i<=8;i++){
        sum+=i*(number%10);
        number/=10;
    }
    sum+=b;
    for(int j=0;j<26;j++){
    int nom = (sum + enu[j] ) % 10; 
        if(nom==0)
            cout << q;
         q = q + 1;
        }
}
    return 0;
}