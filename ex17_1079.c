#include <stdio.h>
 
int main() {
    
    float n, value1, value2, value3, weightAverage;
    
    scanf("%f", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f %f", &value1, &value2, &value3);
        
        weightAverage = (value1 * 2 + value2 * 3 + value3 * 5) / (2 + 3 + 5);
        
        printf("%.1f\n", weightAverage);
    }
    
    return 0;
}
