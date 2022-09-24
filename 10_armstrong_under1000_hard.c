// 10. Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
#include<math.h>

int main()
{
    int x,r,n,rem,count,sum;
//    printf("enert no n: ");
//    scanf("%d",&n);
    // very imp. point
    for(n=1;n<=1000;n++)
    {
    	count=0;
    	sum=0;
    	int t=n;
     
    while (t)
    {
     t/=10;
     count++;
    }
   int k=n;
    while(k)
    {
    	
    	rem=k%10;
    sum+=pow(rem,count);
    k/=10;
	}
	if(sum==n)
	printf("\n%d",sum);

    

	}
    

    return 0;
}
