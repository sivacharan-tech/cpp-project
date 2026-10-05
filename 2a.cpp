#include <stdio.h>

// Define structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s1, s2;
 
    // Input values for first structure
    printf("Enter ID, Name and Marks:\n");
    scanf("%d %s %f", &s1.id, s1.name, &s1.marks);

    // Copy structure s1 into s2
    s2 = s1;

    // Display copied values
    printf("\nCopied Details:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}

