#include <iostream>
#include <vector>
using namespace std;
void bubble (int a[],int b);
vector <int> g;
int main(){
int a;
int h[20];
while(cin>>a){
    for(int i=0;i<a;i++)
        cin>>h[i];
        bubble(h,a);
        for(int i=0;i<a;i++)
            g.push_back(h[i]);

        for(int k=0;k<a;k++)
            cout<<g[k]<<" ";
}
    return 0;
}
void bubble(int a[],int b){
    int temp;
    for(int i=1;i<b;i++){
        for(int k=0;k<(b-1);k++){
            if(a[k]>a[k+1]){
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
}