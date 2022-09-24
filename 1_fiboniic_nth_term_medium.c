// Assignment - 7
// Iterative Control Statements (Part - 2)
// 1. Write a program to find the Nth term of the Fibonnaci series.(//FS:1,1,2,3,5,8,13,21,34....)
// #include <stdio.h>
// int main()
// {
//   int n, i, s = 0, x = 1;
//   printf("enter n   ");
//   scanf("%d", &n);
//   if (n % 2 == 0)
//   {
//     for (i = 1; i <= n / 2; i++)
//     {
//       x = s + x;
//       s = s + x;

//       /* code */
//     }
//     printf("%d\n", s);
//   }
//   else
//   {
//     {
//       for (i = 1; i <= n / 2 + 1; i++)
//       {
//         x = s + x;
//         s = s + x;

//         /* code */
//       }
//       printf("%d\n", x);
//     }
//     return 0;
//   }
// }





#include <stdio.h>
int main()
{
  int n, i, previous = 0, now = 1,next=0;
  printf("enter n   ");
  scanf("%d", &n);
//  printf("1\n");
  for ( i = 2; i <= n; i++)
  {
      next=previous+now;
//      printf("%d\n",next);
      previous=now;
      now=next;


    /* code */
  }
    printf("%d\n",next);
  
  return 0;
}
