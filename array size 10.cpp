#include<stdio.h>
#include<conio.h>

int main()
 {
    int s[10], i;

    for (i = 0; i < 10; i++) 
	{
        printf("\nEnter any digit: ");
        scanf("%d", &s[i]);
    }

    printf("\nEntered digits are: ");
    for (i = 0; i < 10; i++) {
        printf("%d\t", s[i]);
    }

    getch();
}

