#include <stdio.h>

int main()
{
    int n, i;
    float marks[100], total = 0, average;

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input marks
    printf("Enter marks of students:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &marks[i]);
        total += marks[i];   // Add each mark to total
    }

    // Calculate average
    average = total / n;

    // Display results
    printf("\nTotal marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}

