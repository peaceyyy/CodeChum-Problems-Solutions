/*
Exam Scores by CodeChum Admin

Write a program that has a structure Exam:

 

Exam:
char subject[50]
int score
 

In the main function, first ask for the number of exams, then create an array of Exam structs. For each exam, prompt for the subject name and score, assign the inputs to the members of each Exam struct, and finally print the members of the struct by accessing them.
*/

#include <stdio.h>
#include <string.h>

typedef struct {
        
    char subject[50];
    int score;
    
} Exam;


int main()
{
    int examCount;
    
    printf("Enter the number of exams: ");
    scanf("%d", &examCount);
    Exam exam[examCount];
    
    for (int i = 0; i < examCount; i++)
    {
        
        printf("\nEnter details for exam %d:\n", i + 1);
        printf("Subject: ");
        scanf(" %[^\n]s", &exam[i].subject);
        printf("Score: ");
        scanf("%d", &exam[i].score);
    }
    

    
    
    printf("\nExam Details:\n");
    for(int i = 0; i < examCount; i++) {
        printf("\nExam %d:\n", i + 1);
        printf("Subject: %s\n", exam[i].subject);
        printf("Score: %d\n", exam[i].score);
    }
    
    
    return 0;
}