#include<stdio.h>

int main()
{
    int a[2][3], b[2][3], c[2][3], i, j;
    
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 3; j++)
		 {
            printf("Enter element a[i][j]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
  
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 3; j++)
		 {
            printf("Enter element b[i][j]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            c[i][j] = a[i][j] * b[i][j];
        }
    }
    
    for (i = 0; i < 2; i++)
	 {
        for (j = 0; j < 3; j++) 
		{
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

