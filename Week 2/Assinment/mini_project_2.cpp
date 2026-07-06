#include <stdio.h>

float calculatePercentage(int marks[], int n)
{
    int i, total = 0;

    for(i = 0; i < n; i++)
    {
        total += marks[i];
    }

    return (float)total / n;
}

char calculateGrade(float percentage)
{
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 75)
        return 'B';
    else if(percentage >= 60)
        return 'C';
    else if(percentage >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    char name[50];
    int marks[5], i;
    float percentage;

    printf("Enter Student Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    percentage = calculatePercentage(marks, 5);

    printf("\n----- STUDENT REPORT -----\n");
    printf("Name: %s", name);

    printf("Marks: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }

    printf("\nPercentage: %.2f%%", percentage);
    printf("\nGrade: %c", calculateGrade(percentage));

    if(percentage >= 40)
        printf("\nResult: PASS");
    else
        printf("\nResult: FAIL");

    return 0;
}