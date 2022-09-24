// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.







#include <stdio.h>
int main()
{
  int n, i, previous = 0, now = 1,next=0;
  printf("enter n   ");
  scanf("%d", &n);
//   printf("1\n");
  for ( i = 0; 1; i++)
  {
      next=previous+now;
      // printf("%d\n",next);
      previous=now;
      now=next;
if(next==n)
{
    printf("no. found");
    break;
}
if(next>n)
{
    printf("no. not found");
    break;
}

    /* code */
  }
    
  
  return 0;
}