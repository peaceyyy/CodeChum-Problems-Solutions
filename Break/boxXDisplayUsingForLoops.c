#include <stdio.h>

void displayBox(int, char);

int main(){

    int size;
    char character;

    printf("Enter size of box: ");
    scanf("%d", &size);

    printf("Enter character: ");
    scanf(" %c", &character);

    if (size < 4 && size > 12) printf("Invalid box size!");
    displayBox(size, character);

    return 0;
}

void displayBox(int size, char character){

    int start = 0, end = size - 1, i = 0, j;

    while (i < size){
 
        j = 0;

        while (j <= size - 1){

            if (j == start || j == end ) printf("%c", character);
            else printf("-");
            j++;

        }  

        start++;
        end--;

        printf("\n");
        i++;
    }

}