// 6. Write a program to print all Prime numbers under 100


#include<stdio.h>
int main()
{
    int i,j;
    
    for(i=2;i<=100;i++)
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
