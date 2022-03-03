#include <iostream>
using namespace std;

int main()
{
	int in1;
	
	//輸入測資 
	while(cin>>in1)
	{
		//數字很大用long long 
		long long fn=0,gn=0;
		
		//照題目給的公式計算
		for(int n=1;n<=in1;n++)
		{ 
			fn+=n;
			gn+=fn;
		}
		
		//輸出
		cout<<fn<<" "<<gn<<endl;
		
	}
	return 0;
}
