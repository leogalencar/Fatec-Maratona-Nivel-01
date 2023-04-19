#include <stdio.h>
 
int main() {
 
    int X; // X = distance
    float Y, consumption; // Y = spent fuel total
    
    scanf("%d", &X);
    scanf("%f", &Y);
    
    consumption = X / Y;
    
    printf("%.3f km/l\n", consumption);
 
    return 0;
}
