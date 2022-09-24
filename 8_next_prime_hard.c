// 8. Write a program to find next Prime number of a given number
#include<stdio.h>
int main()
{
	int a=6,b=60,i,j,p;
	int n=53;
	for(i=n+1;1;i++)
	{
		int flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			break;
			}
				
		}
		if(flag!=1)
	  {
	  	 printf("%d ",i);
	   break;
	  }
	}
	return 0;
}
