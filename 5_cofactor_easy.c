// 5. Write a program to check whether two given numbers are co-prime
// numbers or not  (// common factor 1 e.g. 9 and 10) or if hcf==1 then no. are coprime.
#include<stdio.h>
int main()
{
    int a,b,i,l,hcf=1;
    printf("enter a,b : ");
    scanf("%d %d",&a,&b);
    int min= a<b?a:b;
    
        for ( i = 1; i <= min; i++)
        {
            if(a%i==0&&b%i==0)
			{
            hcf=i;
            
            }

        }
//        printf("HCF is : %d",hcf);
        if(hcf==1)
        printf("no. is coprime");
        else
      printf("no. is not coprime");
    return 0;
    
}
