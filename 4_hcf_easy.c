// 4. Write a program to calculate HCF of two numbers



//#include<stdio.h>
//int main()
//{
//    int a,b,i,l;
//    printf("enter a,b : ");
//    scanf("%d %d",&a,&b);
//    int min= a<b?a:b;
//    
//        for ( i = min; i >= 1; i--)
//        {
//            if(a%i==0&&b%i==0)
//			{
//            printf("HCF is : %d",i);
//            break;
//            }
//
//        }
//        
//      
//    return 0;
//    
//}

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
        printf("HCF is : %d",hcf);
      
    return 0;
    
}
