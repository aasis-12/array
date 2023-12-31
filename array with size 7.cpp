#include<stdio.h>

int main()
 {
    int s[7], i;

    for (i = 0; i < 7; i++) 
	{
        printf("\nEnter any digit: ");
        scanf("%d", &s[i]);
    }

    printf("\nEntered digits are: ");
    for (i = 0; i < 7; i++) {
        printf("%d\t", s[i]);
    }

    return 0;
}

