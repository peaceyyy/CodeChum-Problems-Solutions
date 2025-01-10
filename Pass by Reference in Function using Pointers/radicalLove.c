#include <stdio.h>

void adjustRadius(float* radius){
    
    *radius = (*radius + (*radius * 0.50))/100;
}

int main(){
    
    float radiusOfCircle;
    
    printf("Enter the radius of the circle (in cm): ");
    scanf("%f", &radiusOfCircle);
    
    printf("Before adjustment: %.2f cm", radiusOfCircle);
    adjustRadius(&radiusOfCircle);
    printf("\nAfter adjustment: %.2f meters", radiusOfCircle);
    
    
    return 0;
}