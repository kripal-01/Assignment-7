// 2. Write a program to print first N terms of Fibonacci series





#include <stdio.h>
int main()
{
  int n, i, previous = 0, now = 1,next=0;
  printf("enter n   ");
  scanf("%d", &n);
  printf("1\n");
  for ( i = 1; i < n; i++)
  {
      next=previous+now;
       printf("%d\n",next);
      previous=now;
      now=next;


    /* code */
  }
//    printf("%d\n",next);
  
  return 0;
}
