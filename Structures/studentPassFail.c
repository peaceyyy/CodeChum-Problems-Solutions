/*
Student Pass/Fail
by CodeChum Admin

Write a program that defines a structure Student:

 

Student:
char name[50]
float marks
 

Then, write a function void checkPassFail(Student s) that accepts a `Student` struct 
and prints "Pass" if the marks are 50 or more, and "Fail" otherwise.

 

In the main function, prompt the user to input the name and marks, 
create a Student struct, and pass it to the checkPassFail function.


*/

#include <stdio.h>

typedef struct  {
    char name[50];
    float marks;
    
} Student;

void checkPassFail(Student s)
{
    if (s.marks >= 50) printf("%s: Pass", s.name);
    else printf("%s: Fail", s.name);
}

int main()
{
    Student s1;
    
    printf("Enter student name: ");
    scanf("%s", &s1.name);
    
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    
    checkPassFail(s1);
    
    return 0;

}