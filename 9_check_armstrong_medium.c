// 9. Write a program to check whether a given number is an Armstrong number
// or not (// 371 is armsrong bcaz 3*3*3+7*7*7+1*1*1=371;if 24 is A.S. then 2*2+4*4=24)
#include<stdio.h>
#include<math.h>

int main()
{
    int x,r,n,sum=0,rem,count=0;
    printf("enert no n: ");
    scanf("%d",&n);
    // very imp. point
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
	printf("no. is armstrong");
	else
	printf("not armstrong");
    


    return 0;
}
