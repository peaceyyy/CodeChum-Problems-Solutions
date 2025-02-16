#include <stdio.h>  
#include <string.h>  
#define MAX_STR_LEN 100  

typedef struct {  
    int x;  
    int y;  
    char location[MAX_STR_LEN];  
} Point;  

int main() {  
    Point points[3];  

    
    for (int i = 0; i < 3; i++) { 
        points[i].x = i + 1;  
        points[i].y = 3 - i;  
        if (i == 0) strcpy(points[i].location, "hi"); 
        else if (i == 1) strcpy(points[i].location, "hello"); 
        else if (i == 2) strcpy(points[i].location, "goodbye"); 
    }  

    
    for (int i = 0; i < 3; i++) { 
        printf("%d %d %s\n", points[i].x, points[i].y, points[i].location); 
    }  

    return 0;  
}