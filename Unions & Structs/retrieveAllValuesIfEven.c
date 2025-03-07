/*
Given:

In retrieveV2, retrieve all the values where their studentId if the value is an even number. Add all found values in a dynamic array. Use malloc() or realloc() if necessary.

Output:
102     Alice   English
104       Eva   History
106    Sophia   Physics
108      Emma   Biology

Taken from https://near-mandrill-5da.notion.site/Programming-2-b79b46fc68bc4225b5d9915a38f0b151?p=0dac6188ef394be48c70fc6899f5cc99&pm=s
*/


#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE 50

typedef struct
{
    int studentId;
    char name[NAME_SIZE];
    char course[NAME_SIZE];
} StudentType;

int countEvenStudentIds(StudentType data[][3])
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (data[i][j].studentId % 2 == 0)
            {
                count++;
            }
        }
    }
    return count;
}

StudentType *retrieveV2(StudentType data[][3], int *outCount)
{
    int count = countEvenStudentIds(data);
    StudentType *ret = malloc(count * sizeof(StudentType));
    if (ret == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (data[i][j].studentId % 2 == 0)
            {
                ret[index++] = data[i][j];
            }
        }
    }
    
    *outCount = count;
    return ret;
}

int main()
{
    StudentType studentData[3][3] = {
        {{101, "John", "Math"}, {102, "Alice", "English"}, {103, "Bob", "Science"}},
        {{104, "Eva", "History"}, {105, "Mike", "Art"}, {106, "Sophia", "Physics"}},
        {{107, "David", "Chemistry"}, {108, "Emma", "Biology"}, {109, "Charlie", "Geography"}}};

    int count;
    StudentType *ret = retrieveV2(studentData, &count);
    for (int i = 0; i < count; i++)
    {
        printf("Student ID: %d, Name: %s, Course: %s\n", ret[i].studentId, ret[i].name, ret[i].course);
    }

    free(ret);
    return 0;
}
