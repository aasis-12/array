#include<stdio.h>
int main()
{
int p[10],i;
for(i=0;i<10;i++)
   {
    printf("\n enter elements that you want:");
    scanf("%d",&p[i]);
}
 
    printf("\n entered elements are:");
    for (i=0;i<10;i++)
      {
 	   printf("%d\t",p[i]);
      }
    return 0;
   }

