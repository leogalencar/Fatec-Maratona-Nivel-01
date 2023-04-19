#include <stdio.h>
 
int main() {
 
    double R, area, n = 3.14159;
    
    scanf("%lf", &R);
    
    area = n * (R*R);
    
    printf("A=%.4lf\n", area);
 
    return 0;
}
