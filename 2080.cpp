#include <stdio.h>


struct Student {
    char name[50];
    int sub1;
    int sub2;
    int sub3;
};


float Per(int sub1, int sub2, int sub3)
 {
    
    int totalMarks = 100 * 3;
    int obtainedMarks = sub1 + sub2 + sub3;
    float per = (float)obtainedMarks / totalMarks * 100;
    return per;
}

int main() 
{
    struct Student students[12];

   
    for (int i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks in sub1: ");
        scanf("%d", &students[i].sub1);

        printf("Marks in sub2: ");
        scanf("%d", &students[i].sub2);

        printf("Marks in sub3: ");
        scanf("%d", &students[i].sub3);
    }

    
    printf("\n\nStudent Information and Percentage:\n");
    for (int i = 0; i < 12; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Marks in sub1: %d\n", students[i].sub1);
        printf("Marks in sub2: %d\n", students[i].sub2);
        printf("Marks in sub3: %d\n", students[i].sub3);

       
        float per = Per(students[i].sub1, students[i].sub2, students[i].sub3);
        printf("Percentage: %.2f%%\n\n", per);
    }

    return 0;
}

