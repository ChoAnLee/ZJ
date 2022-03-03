#include <iostream>
using namespace std;
main()
{	
int n,m;
	while(cin>>n>>m)
	{
		if(n>m&&m>=1)
		{
			cout<<m+1<<endl;
		}
		else if(n==m)
		{
			cout<<m<<endl;
		}
	}
}
