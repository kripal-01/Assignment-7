// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,j,a,c;
    printf("enter two no.");
    scanf("%d %d",&a,&c);
    int b= c>=a?c:a;
    for(i=a;i<=b;i++)
    {
        for ( j = 2; j < i/2; j++)
        {
            if(i%j==0)
            
           break;

            /* code */
        }
        if(i%j!=0)
        printf("\n%d",i);
        
    }    


    /* code */
    return 0;
}
