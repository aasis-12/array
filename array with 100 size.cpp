#include<stdio.h>

int main()
 {
    int p[100], i,n;
    printf("\n enter size of an array less than 100");
    scanf("%d",&n);
    for (i = 0; i < n; i++) 
	{
        printf("\nEnter any digit: ");
        scanf("%d", &p[i]);
    }

    printf("\nEntered digits are: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", p[i]);
    }

    return 0;
}

