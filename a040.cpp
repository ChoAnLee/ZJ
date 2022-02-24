#include<stdio.h>
#include<math.h>
int countdigit(int);
int Armstrong(int);
int main(){
    int n,m,i;
    int count;
    while(scanf("%d %d",&n,&m)!=EOF)
    { 
      count=0;
      for(i=n;i<=m;i++)
      { 
           if(Armstrong(i))
           {
               printf("%d ",i);
               count++;
           }                                                    
      } 
      if(count==0)
      printf("none");
      printf("\n");    
    }
return 0;    
}



int countdigit(int number)
{    
    int count=0;
    while( number )
        {
          count++;
          number/= 10;
        }            
    return count;            
}

int Armstrong(int number)
{
   int flag=0;
   double t;
   int sum=0;
   int copy;
   copy=number;
   t=countdigit(number);
   while(number)
       {
           sum+=(int)pow((double)(number%10),t);
           number/=10;
       }
       if(sum==copy)
       flag=1;    

    return flag;
}
