#include <stdio.h>
 
int main() {
 
    float number, sum, average;
    int positiveTotal;
    
    for (int i = 0; i < 6; i++)
    {
       scanf("%f", &number);
       
       if (number > 0)
       {
           sum += number;
           positiveTotal++;
       }
    }
    
    average = sum / positiveTotal;
    
    printf("%d valores positivos\n", positiveTotal);
    printf("%.1f\n", average);
 
    return 0;
}
